FROM julianassmann/opencv-cuda:cuda-10.2-opencv-4.2

USER root

RUN apt-key adv --keyserver keyserver.ubuntu.com --recv-keys A4B469963BF863CC

RUN apt-get update 

#armadilo
RUN apt-get --yes install libopenblas-dev liblapack-dev

#opengl
RUN apt-get --yes install mesa-utils libglu1-mesa-dev freeglut3-dev mesa-common-dev
RUN apt-get --yes install libglew-dev libglfw3-dev libglm-dev

ENV LD_LIBRARY_PATH=/usr/lib/wsl/lib

WORKDIR /home/app