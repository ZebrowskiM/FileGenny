cmake_minimum_required(VERSION 3.15)
project(FileGenny C)

set(CMAKE_C_STANDARD 11)

add_executable(FileGenny main.c GenerateDummyText.c GenerateDummyText.h)