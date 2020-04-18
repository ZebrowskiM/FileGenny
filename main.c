#include <stdio.h>
#include <malloc.h>
#include "SupportedFileTypes.h"
#include "FileFactory.h"
#include "GenerateDummyText.h"
int main() {
    int arrsize = 999;
    char *data;
    char filepath[] = "C:\\Users\\Marek\\Desktop\\SampleFile";

    data = GenerateDummyText(false, arrsize);
    for(int x = 0; x <= arrsize; x++){
        printf("%c",*(data+x));
    }
    CreateFile(json,filepath,data,arrsize);
    free(filepath);
    free(arrsize);
    free(data);

    return 0;
}
