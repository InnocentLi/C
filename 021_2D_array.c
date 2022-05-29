//
// Created by Innocent on 5/29/22.
//
#include "stdio.h"
#include "io_utils.h"
//  i++  <= ++i


void SumIntArray(int rows,int columns ,int array[][columns],int result[]){
    for(int i=0;i<rows;++i){
        for(int j = 0;j<columns;++j){
             result[i]+=array[i][j];
        }
    }
}


int main(){
    int vehicle_limits[5][2]={
            {0,5},
            {1,6},
            {2,7},
            {3,8},
            {4,9}
    };
    int scores[5][4]={
            {123,213,12,321},
            {123,213,12,321},
            {123,213,12,321},
            {123,213,12,321},
            {123,213,12,321},
    };

    //int 2
    //vehicle_limits[0];
    for(int i =0;i<5;++i){
        for(int j = 0;j<2;++j){
            vehicle_limits[i][j] = i+j;
        }
    }
    int result[5]={0};
    SumIntArray(5,4,scores,result);
    PRINT_INT_ARRAY(result,5);

    return 0;
}