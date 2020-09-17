//
// Created by Marek on 12/18/2019.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "HeaderFiles/GenerateDummyText.h"


char* GenerateDummyText(bool useLetterOnly, int Size) {
    char* data = calloc(Size, sizeof(data));
    srand ( time(NULL) );
    if(useLetterOnly == true){
        for(int x = 0; x < Size; x++ ) {
            *(data+x) = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[rand() % 26];
        }
        return data;
    }
    else{
        for(int x = 0; x < Size; x++ ) {
            *(data+x) = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+"[rand() % 74];
        }
        return data;
    }
}

