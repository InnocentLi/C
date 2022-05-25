//
// Created by Innocent on 5/15/22.
//

#include "stdio.h"
#include "stdarg.h"
// 05.printf.c:20 main:
#define PRINTINF(format,...) printf("("__FILE__":%d)%s:"format"\n",__LINE__,__FUNCTION__ ,##__VA_ARGS__)
#define PRINT_INT(value)PRINTINF(#value":%d",value)
int main(){
    int a = 111;
    printf("hello world!!\n");
    PRINTINF("hello world!!");
    //PRINTINF("hello world!! %d",a);
    int i = 8;
    PRINT_INT(i);
    PRINT_INT(3+4);
}