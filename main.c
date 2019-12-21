#include <stdio.h>
#include <malloc.h>

#include "GenerateDummyText.h"
int main() {
    printf("Hello, World!\n");
    char *data = GenerateDummyText(true,100);
    printf("%s", data);
    free(data);
    return 0;
}
