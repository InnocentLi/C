//
// Created by Innocent on 6/12/22.
//
#include "stdio.h"
#include "io_utils.h"
int main(){
    int a;
    a = 2;

    int *p = &a;
    *p = 2;

    int b = *p;

    // 值
    // &a = p;
    // *怕+1 = 3；
    int array [4]={0};
    int *pa = array;
    *pa = 2;
    *(pa+1) = 3;
    *(pa+2) = 4;
    *(pa+3) = 5;
    PRINT_INT_ARRAY(array,4);
    //int array2[4] = {0}
    // left:storage
    // right:value
    // 修改数组0元素的位置/

    return 0;
}
