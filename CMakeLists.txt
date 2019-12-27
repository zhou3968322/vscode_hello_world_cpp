#1.cmake version, 指定cmake版本
cmake_minimum_required(VERSION 3.8)

#2.project name,指定项目名称，一般与项目文件夹对应
PROJECT(hello_world)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
set(CMAKE_CXX_STANDARD 11)

#3.head file path,头文件目录
INCLUDE_DIRECTORIES(
#/data/shuhui/bin/opencv3.4.6/usr/local/include
./include
)

LINK_DIRECTORIES(
#/data/shuhui/bin/opencv3.4.6/usr/local/lib
)

add_executable(hello_world ./src/main.cpp)
# add_library(test_pse SHARED ./src/test_pse.cpp)

# target_link_libraries(test_pse opencv_core opencv_highgui opencv_imgcodecs opencv_imgproc)