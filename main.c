#include <stdio.h>
#include <malloc.h>
#include "HeaderFiles/SupportedFileTypes.h"
#include "HeaderFiles/FileFactory.h"
#include "HeaderFiles/GenerateDummyText.h"
#include "HeaderFiles/FileQueue.h"
int main() {
    int arrsize = 999;
    const char filepath[] = "C:\\Users\\Marek\\Desktop\\Sample\\newFile";
    printf("Begin\n");
    AddFile(txt,arrsize,filepath);
    AddFile(csv,arrsize,filepath);
    AddFile(log,arrsize,filepath);
    AddFile(generic,arrsize,filepath);
    AddFile(json,arrsize,filepath);
    return 0;
}
