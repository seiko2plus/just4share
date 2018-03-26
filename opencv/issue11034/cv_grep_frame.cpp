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
        "{video  v |    | video path }"
        "{output o |    | frames output path}"
        "{fes    f | 60 | frame every [x] second}"
        "{pos    p | 0  | start pos in second}"
        ;

    CommandLineParser parser(argc, argv, opts);
    parser.about("For sake of the OpenCV#11034");

    String video = parser.get<String>("video");
    String output = parser.get<String>("output");
    int fes = parser.get<int>("fes");
    int pos = parser.get<int>("pos");

    if (!parser.check())
    {
        parser.printErrors();
        return 1;
    }

    CV_Assert(!video.empty() && !output.empty() && fes > 0);

    VideoCapture cap(video, CAP_FFMPEG);
    CV_Assert(cap.isOpened());

    int v_fps = (int)cap.get(CAP_PROP_FPS);
    CV_Assert(v_fps > 0);

    int frame_count = (int)cap.get(CAP_PROP_FRAME_COUNT);
    CV_Assert(frame_count > 0);

    std::vector<int> png_params, jpg_params;
    png_params.push_back(IMWRITE_PNG_COMPRESSION);
    png_params.push_back(3);
    jpg_params.push_back(IMWRITE_JPEG_CHROMA_QUALITY);

    char buf[32];
    Mat frame;
    for (int fpos = v_fps * pos + v_fps - 1, count = 1; fpos < frame_count; fpos += v_fps * fes, count++)
    {
        CV_Assert(cap.set(CAP_PROP_POS_FRAMES, fpos));
        CV_Assert(cap.read(frame));

        sprintf(buf, "/%d.png", count);
        CV_Assert(imwrite(output + buf, frame, png_params));

        sprintf(buf, "/%d.jpg", count);
        CV_Assert(imwrite(output + buf, frame, jpg_params));

        printf("Extract frame(%d) %d, Mat's sum %llu \n", count, fpos, mat_sum(frame));
    }
    return 0;
}