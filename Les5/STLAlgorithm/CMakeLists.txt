cmake_minimum_required(VERSION 3.6)
project(STLAlgorithm)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Particle.cpp Particle.h)
add_executable(STLAlgorithm ${SOURCE_FILES})