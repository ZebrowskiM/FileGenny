#include <stdio.h>
#include <malloc.h>

#include "GenerateDummyText.h"
int main() {
    printf("Hello, World!\n");
    int arrsize = 100;
   char* data = GenerateDummyText(false,arrsize);
    for(int x = 0; x <= arrsize; x++){
        printf("%c",*(data+x));
    }
    free(data);
    return 0;
}
