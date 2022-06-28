//
// Created by Innocent on 6/26/22.
// 函数指针関数ポインタ
#include "stdlib.h"
#include "stdio.h"
#include "io_utils.h"

typedef int Boolean;   // Boolean value
typedef int *Intptr;   // 指针
typedef int IntArray[];  //   数组



void InitPointer(int **ptr,int length,int default_value){
    *ptr = malloc(sizeof (int) * length);
    for(int i = 0;i<length;i++){
        (*ptr)[i] = default_value;
    }
}

int main(){
    int a;
    int *p;
    IntArray players = {1,2,3,4,5};
    PRINT_HEX(&main);
    PRINT_HEX(&InitPointer);
    // 任何一个变量都是* + 指针名字
    void (*func)(int **ptr,int length,int default_value) = &InitPointer;

    (*func)(&p,10,0);

    func(&p,10,0);
    PRINT_INT_ARRAY(p,10);
    free(p);
    return 0;
}
