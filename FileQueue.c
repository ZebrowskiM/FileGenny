//
// Created by Marek on 1/18/2020.
//
#include "SupportedFileTypes.h"
#include "FileQueue.h"
#include "GenerateDummyText.h"
#include "FileFactory.h"
#include <stdlib.h>

void AddFile(FileType fileType,int Size,char path[]){
    printf("letsGo\n");
    char *data = GenerateDummyText(false, Size);
    for(int x = 0; x <= Size; x++){
        printf("%c",*(data+x));
    }
    printf("\n");
    CreateFile(fileType,path,data,Size);
    free(data);
}

/*
 * Add some arrays or events
 * create an array list and a poco to encapsulate it
 * or try to create an event thingy
 */


