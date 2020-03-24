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
                int DataSizeWithCommas = DataSize +(( DataSize * 2 )-1);
                char* newData = calloc(DataSizeWithCommas, sizeof(newData));
                for(int x = 0; x < DataSize; x++){
                    if(x > 0){
                     *(newData+x) = ',';
                     // x%2 == 0
                    }
                    else{
                        *(newData) = *(Data);
                    }
                }
                fputs(Data,file);
                fclose(file);
                free(file);
                free(newData);
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
                //<Data>\n</Data>
                int dataWithXmlSize = DataSize+16;
                char* dataWithXml = calloc(dataWithXmlSize,sizeof(DataSize));
                for(int x = 0;x<dataWithXmlSize;x++){
                    if(x < 7) {
                        *(dataWithXml + x) = "<data>\n"[x];
                    } else if (x < DataSize) {
                        *(dataWithXml + x) = *(Data - 7);
                    } else{
                        *(dataWithXml + x) = "\n</data>"[x-(DataSize+7)];
                    }
                }
                fputs(dataWithXml,file);
                fclose(file);
                free(file);
                free(dataWithXml);
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



