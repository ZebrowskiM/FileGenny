cmake_minimum_required(VERSION 3.15)
project(FileGenny C)

set(CMAKE_C_STANDARD 11)

add_executable(FileGenny main.c GenerateDummyText.c HeaderFiles/GenerateDummyText.h FileFactory.c HeaderFiles/FileFactory.h HeaderFiles/SupportedFileTypes.h FileQueue.c HeaderFiles/FileQueue.h "DLL/FileGenny/HeaderFiles/FileFactory.h" "DLL/FileGenny/HeaderFiles/FileQueue.h" "DLL/FileGenny/HeaderFiles/GenerateDummyText.h" "DLL/FileGenny/HeaderFiles/SupportedFileTypes.h" "DLL/FileGenny/FileFactory.c" "DLL/FileGenny/FileQueue.c" "DLL/FileGenny/GenerateDummyText.c" "DLL/FileGenny/main.c")