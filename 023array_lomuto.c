//
// Created by Innocent on 5/30/22.
//
#include "stdio.h"
#include "io_utils.h"
#include "stdlib.h"
#include "time.h"
#define LEN 9
// random num
void swapElements(int array[],int f,int s){
    int temp = array[f];
    array[f] = array[s];
    array[s] = temp;
}
void ShuffleArray(int array[],int length){
    srand(time(NULL));
    for(int i = length-1;i>0;i--){
        int random_number = rand()%i;
        //printf("rand:%d\n",random_number);
        swapElements(array,i,random_number);
    }
}


int Partition(int array[],int low,int high){
    // last
    int pivot = array[high];
    int partition = low;
    for(int i=low;i<high;++i){
        if(array[i]<pivot){
            swapElements(array,i,partition++);
        }
    }
    swapElements(array,partition,high);
    return partition;
}


void SortArray(int array[],int low,int high){
    if(low>=high)return;
    int P = Partition(array,low,high);
    SortArray(array,low,P-1);
    SortArray(array,P+1,high);
}



int main(){
    int array[LEN];
    for(int i = 0;i<LEN;i++){
        array[i] = i;
    }
    ShuffleArray(array,LEN);
    PRINT_INT_ARRAY(array,LEN);
    printf("--------------\n");
    SortArray(array,0,LEN-1);
    PRINT_INT_ARRAY(array,LEN);
    return 0;
}