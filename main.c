#include <stdio.h>
#include <malloc.h>
#include "SupportedFileTypes.h"
#include "FileFactory.h"
#include "GenerateDummyText.h"
int main() {
    printf("Hello, World!\n");
    int arrsize = 100;
    char *data;
    char filepath[] = "C:\\Users\\Marek\\Desktop\\SampleFile";

    data = GenerateDummyText(true, arrsize);
    for(int x = 0; x <= arrsize; x++){
        printf("%c",*(data+x));
    }
    printf("\n");
    printf("\n %d",CreateFile(txt,filepath,data,arrsize));
    printf("\n");
    free(data);

    return 0;
}
