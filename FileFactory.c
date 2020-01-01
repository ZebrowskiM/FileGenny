//
// Created by Marek on 12/22/2019.
//
#include <stdbool.h>
#include <stdio.h>
#include "SupportedFileTypes.h"
#include "FileFactory.h"
#include <string.h>
#include <stdlib.h>

bool CreateFile(FileType fileType, char filename[], char* Data,int DataSize){
    FILE * file;
        switch (fileType)
        {
            case csv :
                strcat(filename,".csv");
                file = fopen(filename,"w");
                if(file == NULL)
                {
                    printf("Failed to create file");
                    exit(EXIT_FAILURE);
                }
                fputs(Data,file);
                fclose(file);
                free(file);
                return true;
            case txt:
                strcat(filename,".txt");
                file = fopen(filename,"w");
                if(file == NULL)
                {
                    printf("Failed to create file");
                    exit(EXIT_FAILURE);
                }
                fputs(Data,file);
                fclose(file);
                free(file);
                return true;
            case xml:
                strcat(filename,".xml");
                file = fopen(filename,"w");
                if(file == NULL)
                {
                    printf("Failed to create file");
                    exit(EXIT_FAILURE);
                }
                fputs(Data,file);
                fclose(file);
                free(file);
                return true;
            case json:
                strcat(filename,".json");
                file = fopen(filename,"w");
                if(file == NULL)
                {
                    printf("Failed to create file");
                    exit(EXIT_FAILURE);
                }
                fputs(Data,file);
                fclose(file);
                free(file);
                return true;
            case log:
                strcat(filename,".log");
                file = fopen(filename,"w");
                if(file == NULL)
                {
                    printf("Failed to create file");
                    exit(EXIT_FAILURE);
                }
                fputs(Data,file);
                fclose(file);
                free(file);
                return true;
            case generic:
                strcat(filename,".file");
                file = fopen(filename,"w");
                if(file == NULL)
                {
                    printf("Failed to create file");
                    exit(EXIT_FAILURE);
                }
                fputs(Data,file);
                fclose(file);
                free(file);
                return true;
        }

    return false;
}



