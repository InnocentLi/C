//
// Created by Innocent on 5/7/22.
//
#include "stdio.h"
int main(){
    int value = 4;
    printf("size of int:%d\n",sizeof(int));
    printf("%d\n",value);
    value = 5;
    printf("%d",value);
    printf("address of value %x",&value);
    return 0;
}
