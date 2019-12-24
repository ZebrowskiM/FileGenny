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

    for(int x = 0; x <= arrsize;x++){
       // free(data+x);
    }

    return 0;
}
