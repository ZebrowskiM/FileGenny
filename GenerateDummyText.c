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
    char *data = (char *) calloc(Size, sizeof(char));
    if(useLetterOnly == true){
        char avaliableChars[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        for(int x = 0; x < Size; x++ ) {
            int y = rand() % 52;
            data[x] =(char*)y;
        }
        return data;
    }
    else{
        char avaliableChars[74] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+";
        for(int x = 0; x < Size; x++ ) {
            int y = rand() % 74;
            data[x] =(char)y;
        }
        return data;
    }
}

