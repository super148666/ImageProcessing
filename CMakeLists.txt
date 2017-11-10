cmake_minimum_required(VERSION 2.8.3)
project(image_processing)

set(CMAKE_CXX_STANDARD 11)

find_package(OpenCV REQUIRED)

link_directories(./lib)
include_directories(./include ${OpenCV_INCLUDE_DIRS})
set(CMAKE_CXX_FLAGS "-Wall -g")

add_executable(edge edge.cpp)
target_link_libraries(edge ${OpenCV_LIBRARIES})
