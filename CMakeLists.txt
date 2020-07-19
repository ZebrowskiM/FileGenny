cmake_minimum_required(VERSION 3.15)
project(FileGenny C)

set(CMAKE_C_STANDARD 11)

add_executable(FileGenny main.c GenerateDummyText.c HeaderFiles/GenerateDummyText.h FileFactory.c HeaderFiles/FileFactory.h HeaderFiles/SupportedFileTypes.h FileQueue.c HeaderFiles/FileQueue.h)