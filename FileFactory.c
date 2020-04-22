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
                int DataSizeWithCommas = (DataSize*2);
                char* newData = calloc(DataSizeWithCommas, sizeof(newData));
                for(int x = 1; x < DataSizeWithCommas; x++){
                    if( x != 0 && x%2 == 0){
                     *(newData+(x-1)) = ',';
                    }
                    else{
                            *(newData+(x-1)) = *(Data+(((x-1)/2)));
                    }
                }
                fputs(newData,file);
                fclose(file);
                free(file);
                free(newData);
                free(Data);

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
                free(Data);
                return true;
            case xml:
                strcat(filename,".xml");
                file = fopen(filename,"w");
                if(file == NULL)
                {
                    printf("Failed to create file");
                    exit(EXIT_FAILURE);
                }
                char headerXml[44] = "<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?>\n";
                char dataTagEnter[7] = "<data>\n";
                char dataExitTag[8] = "\n</data>";
                fwrite(headerXml,1,sizeof(headerXml),file);
                fwrite(dataTagEnter,1,sizeof(dataTagEnter),file);
                fwrite(Data,1,DataSize,file);
                fwrite(dataExitTag,1,sizeof(dataExitTag),file);
                fclose(file);
                free(file);
                free(dataExitTag);
                free(dataTagEnter);
                free(headerXml);
                return true;
            case json:
                strcat(filename,".json");
                file = fopen(filename,"w");
                if(file == NULL)
                {
                    printf("Failed to create file");
                    exit(EXIT_FAILURE);
                }
                char headerJson[9] = "{\"Data\":\"";
                char TrailerJson[2] = "\"}";
                fwrite(headerJson,1,sizeof(headerJson),file);
                fwrite(Data,1,DataSize,file);
                fwrite(TrailerJson,1,sizeof(TrailerJson),file);
                fclose(file);
                free(file);
                free(headerJson);
                free(TrailerJson);
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



