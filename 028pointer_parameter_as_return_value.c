//
// Created by Innocent on 6/25/22.
//
#include "stdio.h"
#include "io_utils.h"

int SumIntArray(int array[],int length){
    int sum = 0;
    for(int i = 0;i<length;i++){
        sum+=array[i];
    }
    return sum;
}

__int128 TestBigValue(){

    return 0;
}

// 定义一个数组

int main(){
   int array[] = {0,1,2,3,4};
   int sum = SumIntArray(array,5);

   __int128 bigint = TestBigValue();
}
