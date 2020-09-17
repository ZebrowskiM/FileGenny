//
// Created by Marek on 1/18/2020.
//
#include "HeaderFiles/SupportedFileTypes.h"
#include "HeaderFiles/FileQueue.h"
#include "HeaderFiles/GenerateDummyText.h"
#include "HeaderFiles/FileFactory.h"
#include <stdlib.h>

#define FileGenny_Call __stdcall
#define FileGenny_DLL_EXPIMP __declspec(dllexport)

FileGenny_DLL_EXPIMP void FileGenny_Call AddFile(FileType fileType,int Size,char path[]){
    char *data = GenerateDummyText(false, Size);
    CreateFile(fileType,path,data,Size);
    free(data);
}

/*
 * Add some arrays or events
 * create an array list and a poco to encapsulate it
 * or try to create an event thingy
 */


