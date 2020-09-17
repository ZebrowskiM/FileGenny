#include <stdio.h>
#include "HeaderFiles/SupportedFileTypes.h"
#include "HeaderFiles/FileFactory.h"
#include "HeaderFiles/GenerateDummyText.h"
#include "HeaderFiles/FileQueue.h"
#include <string.h>
int main() {
    int arrsize = 9999999;
    const char filepath[] = "C:\\Users\\mzebrowski\\Desktop\\Dummy\\newFile";
    printf("Begin\n");
	for(int i = 0; i < 50; i++)
	{
        char tempFilePath[50];
        char intConvert[8];
        strcpy(tempFilePath, filepath);
        sprintf(intConvert, "%d", i);
        strcat(tempFilePath, intConvert);
        AddFile(txt, arrsize, tempFilePath);
        AddFile(csv, arrsize, tempFilePath);
        AddFile(log, arrsize, tempFilePath);
        AddFile(generic, arrsize, tempFilePath);
        AddFile(json, arrsize, tempFilePath);
	}
    return 0;
}
