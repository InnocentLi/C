//
// Created by Innocent on 5/28/22.
//

#include "stdio.h"
//#include "i0e_utils.h"

#define ARRAY_SIZE 10
int main(){
    int array[10];
    for(int i = 0;i<ARRAY_SIZE;i++){
        array[i] = i;
        printf("%d\n",array[i]);
    }
    int array_2[ARRAY_SIZE] = {0,1,2,3,4,5,6,7,8,9};
    for(int i = 0;i<ARRAY_SIZE;i++){
        printf("%d\n",array_2[i]);
    }
    double array_double[5] = {0.1,2.3,0,0,0};
    for(int i = 0;i<5;i++){
        printf("%f\n",array_double[i]);
    }
    char array_char[5] = {[2]='o'};
    for(int i = 0;i<5;i++){
        printf("%c\n",array_char[i]);
    }
    printf("----------\n");
    char array_char2[5] = {[2]='o','L','L'};
    for(int i = 0;i<5;i++){
        printf("%c\n",array_char2[i]);
    }
    return 0;
}