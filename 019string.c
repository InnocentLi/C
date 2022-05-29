//
// Created by Innocent on 5/28/22.
//

#include <stddef.h>
#include "stdio.h"
#include "string.h"
//#include "i0e_utils.h"

#define ARRAY_SIZE 10
int main(){
    char array[12] = "hello world";
    // C
    // NULL 结尾

    for(int i = 0;i<11;i++){
        printf("%c\n",array[i]);
    }
    printf("%s",array);

    char string_JP[] = "アイウエオ";
    for(int i = 0;i<11;i++){
        printf("%c\n",string_JP[i]);
    }
    printf("%s",string_JP);
    wchar_t w[]= L"アイウエオ";
    return 0;
}