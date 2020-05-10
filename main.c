#include <stdio.h>
#include <malloc.h>
#include "SupportedFileTypes.h"
#include "FileFactory.h"
#include "GenerateDummyText.h"
#include "FileQueue.h"
int main() {
    int arrsize = 999;
    char filepath[] = "C:\\Users\\Marek\\Desktop\\SampleFile\\newFile";
    printf("Begin\n");
    AddFile(txt,arrsize,filepath);
    AddFile(csv,arrsize,filepath);
    printf("Second\n");
    AddFile(log,arrsize,filepath);

    AddFile(generic,arrsize,filepath);
    AddFile(json,arrsize,filepath);
    return 0;
}
