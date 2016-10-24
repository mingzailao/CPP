PROJECT(MyC++)
cmake_minimum_required(VERSION 3.6)
add_compile_options(-std=c++11)
message(STATUS "optional:-std=c++11")

ADD_SUBDIRECTORY(src bin)
