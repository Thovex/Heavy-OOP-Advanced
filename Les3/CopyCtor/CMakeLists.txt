cmake_minimum_required(VERSION 3.6)
project(CopyCtor)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Child.cpp Child.h Parent.cpp Parent.h ParentP.cpp ParentP.h ParentPEigen.cpp ParentPEigen.h)
add_executable(CopyCtor ${SOURCE_FILES})