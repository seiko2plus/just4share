/*
 * Extract frames from video using ffmpeg api
 * and store them into jpg and png
 *
 * just for testing proposal
 * related to OpenCV/issue#11034
*/

#include <opencv2/opencv.hpp>

using namespace cv;

static uint64_t mat_sum(const Mat& mat)
{
    int64_t sum = 0, *d64 = (int64_t*)mat.data;
    size_t len = mat.total() * mat.elemSize();
    len /= sizeof(int64_t);

    for (; len > 0; len--)
        sum += d64[len];

    return (uint64_t)sum;
}

int main(int argc, char **argv)
{
    const String opts =
        "{video  v |    | video file }"
        "{output o |    | frames's output}"
        "{sec    s | 60 | frame per second}"
        ;

    CommandLineParser parser(argc, argv, opts);
    parser.about("For sake of the OpenCV#11034");

    String video = parser.get<String>("video");
    String output = parser.get<String>("output");
    int psec = parser.get<int>("sec");

    if (!parser.check())
    {
        parser.printErrors();
        return 1;
    }

    CV_Assert(!video.empty() && !output.empty() && psec > 0);

    VideoCapture cap(video, CAP_FFMPEG);
    CV_Assert(cap.isOpened());

    int fps = (int)cap.get(CAP_PROP_FPS);
    CV_Assert(fps > 0);

    int frame_count = (int)cap.get(CAP_PROP_FRAME_COUNT);
    CV_Assert(frame_count > 0);

    std::vector<int> png_params, jpg_params;
    png_params.push_back(IMWRITE_PNG_COMPRESSION);
    png_params.push_back(9);
    jpg_params.push_back(IMWRITE_JPEG_CHROMA_QUALITY);

    char buf[32];
    Mat frame;
    for (int fpos = 0, count = 1; fpos < frame_count; fpos += fps * psec, count++)
    {
        CV_Assert(cap.set(CAP_PROP_POS_FRAMES, fpos));
        CV_Assert(cap.read(frame));

        sprintf(buf, "/%d.png", count);
        CV_Assert(imwrite(output + buf, frame, png_params));

        sprintf(buf, "/%d.jpg", count);
        CV_Assert(imwrite(output + buf, frame, jpg_params));

        printf("Extract frame(%d) %d, Mat's sum %016llx \n", count, fpos, mat_sum(frame));
    }
    return 0;
}