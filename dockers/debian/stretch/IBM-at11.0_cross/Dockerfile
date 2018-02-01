FROM debian:stretch

ENV AT_VER at11.0
WORKDIR /root

RUN apt-get update && apt-get install -y curl cmake git gnupg && apt-get clean

RUN curl -O ftp://ftp.unicamp.br/pub/linuxpatch/toolchain/at/debian/dists/stretch/6976a827.gpg.key \
    && apt-key add 6976a827.gpg.key \
    && echo "deb ftp://ftp.unicamp.br/pub/linuxpatch/toolchain/at/debian stretch ${AT_VER}" >> /etc/apt/sources.list

RUN apt-get update && apt-get install -y  \
    advance-toolchain-${AT_VER}-cross-common \
    advance-toolchain-${AT_VER}-cross-ppc64le \
    advance-toolchain-${AT_VER}-cross-ppc64le-mcore-libs \
    advance-toolchain-${AT_VER}-cross-ppc64le-runtime-extras \
    && apt-get clean
