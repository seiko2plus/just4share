# Minimal build for OpenCV with ffmpeg
# To detect color space conversion optimization bug in libswscale on ppc64le arch
# Related to OpenCV/issue#11034

FROM debian:stretch

RUN echo 'debconf debconf/frontend select Noninteractive' | debconf-set-selections

RUN apt-get update \
 && apt-get install -y apt-utils build-essential cmake git pkg-config curl \
 && apt-get clean

WORKDIR /usr/src

RUN apt-get install -y libpng-dev libjpeg-dev libvpx-dev libx264-dev libx265-dev

ARG FFMPEG_VER=3.4.2
ARG FFMPEG_DEBUG_LEVEL=3

RUN git clone -b n${FFMPEG_VER} --single-branch --depth 1 git://source.ffmpeg.org/ffmpeg.git

RUN cd ffmpeg \
 && ./configure --prefix=/usr --extra-libs="-lpthread -lm" --enable-gpl \
                --enable-libvpx --enable-libx264 --enable-nonfree \
                --enable-shared --enable-avresample \
                --enable-debug=${FFMPEG_DEBUG_LEVEL} \
                --disable-doc --disable-static \
 && make -j$(nproc) install

RUN mkdir -p /tests/before && cd ffmpeg \
 && make check > /tests/before/ffmpeg_check.log 2>&1; exit 0

ARG OPENCV_VER=3.4.1
ARG OPENCV_BUILD_TYPE=Debug

RUN git clone -b ${OPENCV_VER} --single-branch --depth 1 https://github.com/opencv/opencv.git \
 && git clone -b ${OPENCV_VER} --single-branch --depth 1 https://github.com/opencv/opencv_extra.git

RUN mkdir opencv/build && cd opencv/build \
 && cmake -DCMAKE_INSTALL_PREFIX:PATH=/usr -DCMAKE_BUILD_TYPE=${OPENCV_BUILD_TYPE} \
          -DBUILD_opencv_dnn=OFF -DBUILD_opencv_features2d=OFF \
          -DBUILD_opencv_calib3d=OFF -DBUILD_opencv_shape=OFF -DBUILD_opencv_ml=OFF \
          -DBUILD_opencv_video=OFF -DBUILD_opencv_flann=OFF -Dwithout-python=ON \
          -DWITH_TESTS=ON -DWITH_FFMPEG=ON ../ \
 && make -j$(nproc) install

ENV OPENCV_TEST_DATA_PATH=/usr/src/opencv_extra/testdata

RUN opencv/build/bin/opencv_test_imgcodecs > /tests/before/opencv_test_imgcodecs.log 2>&1; exit 0
RUN opencv/build/bin/opencv_perf_imgcodecs > /tests/before/opencv_perf_imgcodecs.log 2>&1; exit 0

RUN opencv/build/bin/opencv_test_videoio > /tests/before/opencv_test_videoio.log 2>&1; exit 0
RUN opencv/build/bin/opencv_perf_videoio > /tests/before/opencv_perf_videoio.log 2>&1; exit 0

#ENV THE_VIDEO=./opencv_extra/testdata/highgui/video/big_buck_bunny.mp4
ENV THE_VIDEO=./Sintel.mp4
ENV VIDEO_URL=http://commondatastorage.googleapis.com/gtv-videos-bucket/sample/Sintel.mp4

RUN curl -o $THE_VIDEO $VIDEO_URL

RUN mkdir /tests/before/frames \
 && ffmpeg -i $THE_VIDEO -filter:v fps=fps=1/60 /tests/before/frames/%0d.png \
 && ffmpeg -i $THE_VIDEO -filter:v fps=fps=1/60 /tests/before/frames/%0d.jpg

# Grep frames using cv::videocapture to leaves no room for doubt
ENV THE_SOURCE=https://raw.githubusercontent.com/seiko2plus/just4share/master/opencv/issue11034/cv_grep_frame.cpp

RUN curl $THE_SOURCE -o cv_grep_frame.cpp \
 && g++ -lopencv_core -lopencv_videoio -lopencv_imgcodecs -o cv_grep_frame ./cv_grep_frame.cpp \
 && mkdir /tests/before/cv_frames \
 && ./cv_grep_frame -video=$THE_VIDEO -output=/tests/before/cv_frames/ -fes=60 -pos=29

# Now it's the time to disable color space conversion optimization

# patching libswscale instead of rebuild ffmpeg with disable altivec/vsx
# to add more clarification and to save some energy

# disable PPC/Altivec YUV-RGB color space conversion optimization
ENV THE_PATCH=https://raw.githubusercontent.com/seiko2plus/just4share/master/opencv/issue11034/libswscale-disable-ppc-yuv2rgb.diff

RUN cd ffmpeg \
 && curl $THE_PATCH | git apply -v --whitespace=fix --no-index --directory libswscale \
 && make -j$(nproc) install

# run tests after patching libswscale

RUN mkdir -p /tests/after && cd ffmpeg \
 && make check > /tests/after/ffmpeg_check.log 2>&1; exit 0

RUN opencv/build/bin/opencv_test_imgcodecs > /tests/after/opencv_test_imgcodecs.log 2>&1; exit 0
RUN opencv/build/bin/opencv_perf_imgcodecs > /tests/after/opencv_perf_imgcodecs.log 2>&1; exit 0

RUN opencv/build/bin/opencv_test_videoio > /tests/after/opencv_test_videoio.log 2>&1; exit 0
RUN opencv/build/bin/opencv_perf_videoio > /tests/after/opencv_perf_videoio.log 2>&1; exit 0

RUN mkdir /tests/after/frames \
 && ffmpeg -i $THE_VIDEO -filter:v fps=fps=1/60 /tests/after/frames/%0d.png \
 && ffmpeg -i $THE_VIDEO -filter:v fps=fps=1/60 /tests/after/frames/%0d.jpg \
 && mkdir /tests/after/cv_frames \
 && ./cv_grep_frame -video=$THE_VIDEO -output=/tests/after/cv_frames/ -fes=60 -pos=29

WORKDIR /tests