//
// Created by Innocent on 5/29/22.
//

#include "stdio.h"
#include "io_utils.h"
#include "stdlib.h"
#include "time.h"
#define PLAYER 50
// charge the num
void swapElements(int array[],int f,int s){
    int temp = array[f];
    array[f] = array[s];
    array[s] = temp;
}
//math random
void ShuffleArray(int array[],int length){
    srand(time(NULL));
    for(int i = 0;i<length;i++){
        int random_number = rand()%length;
        printf("rand:%d\n",random_number);
        swapElements(array,i,random_number);
    }
}

int main(){
    int players[PLAYER]={0};
    for(int i=0;i<50;++i){
        players[i] = i+1;
    }
    ShuffleArray(players,50);
    //PRINT_INT_ARRAY(players,50);

    return 0;
}
