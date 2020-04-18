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
                char header[44] = "<?xml version=\"1.0\" encoding=\"ISO-8859-1\"?>\n";
                char dataTagEnter[7] = "<data>\n";
                char dataExitTag[8] = "\n</data>";
                fwrite(header,1,sizeof(header),file);
                fwrite(dataTagEnter,1,sizeof(dataTagEnter),file);
                fwrite(Data,1,DataSize,file);
                fwrite(dataExitTag,1,sizeof(dataExitTag),file);
                fclose(file);
                free(file);
                free(dataExitTag);
                free(dataTagEnter);
                free(header);
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



