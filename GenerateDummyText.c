//
// Created by Marek on 12/18/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "GenerateDummyText.h"



//0-127 ascii
// ASCII vals start at 64 - 127
// 1024 charcters
char *GenerateDummyText(bool useLetterOnly, int Size) {
    char * data = (char *) malloc(Size);
    if(useLetterOnly == true){
        for(int x = 0; x < Size; x++ ) {
            int y = rand() % 89;
            if (x < 65) {
                int dif = x - 64;
                int z = rand() % 64;
                if(z> dif){
                    y = x + z;
                }}
            data[x] =(char*)y;
        }
        return data;
    }
    else{
        for(int x = 0; x < Size; x++ ) {
            int y = rand() % 177;
            printf("%d",y);
            data[x] =(char)y;
        }
        return data;
    }
}

