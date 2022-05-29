//
// Created by Innocent on 5/28/22.
//

#include "stdio.h"
//#include "i0e_utils.h"

#define ARRAY_SIZE 10
int main(){
    int array[10];
    array[5];
    // C99
    const int a = 5;
    int array2[a];
    int b = 10;
    // 不能常量定义数组，运行时会有警告⚠
    // ️
    int array3[b];
    array3[1] = 110;
    printf("%d",array3[1]);
    return 0;
}