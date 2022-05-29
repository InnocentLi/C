//
// Created by Innocent on 5/28/23.
//

#include <stddef.h>
#include "stdio.h"
#include "string.h"

#define LENGTH 10

// 不能假定此函数
int SumIntArray(int array[LENGTH]){
    int sum=0;
    for(int i=0;i<LENGTH;i++){
        sum+=array[i];
    }
    return sum;
}
//正确
int SumIntArray2(int array[],int length){
    int sum=0;
    for(int i=0;i<length;i++){
        sum+=array[i];
    }
    return sum;
}


int main(){
    int array[LENGTH]= {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",SumIntArray(array));
    int array2[20]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    printf("%d\n",SumIntArray2(array2,20));
    return 0;
}