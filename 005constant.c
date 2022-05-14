//
// Created by Innocent on 5/8/22.
//
#include "stdio.h"
# define RED 888
# define GREEN 666
# define BLUE 000
int main(){
    // const <type> readonly variable
    const int k = 3800;
    printf("k:%d\n",k);
    int *p = &k;
    *p = 0;
    printf("new_k:%d\n",k);
    printf("Define:%d\n",RED);
    #undef RED
    //printf("Define:%d\n",RED);

    // 硬编码

    return 0;
}
