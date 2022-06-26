//
// Created by Innocent on 6/25/22.
//

#include "stdlib.h"
#include "stdio.h"
#include "io_utils.h"

#define PLAYER_COUNT 10

void InitPointer(int **ptr,int length,int default_value){
    *ptr = malloc(sizeof (int)*length);
    for(int i=0;i<length;i++){
        (*ptr)[i] = default_value;
    }

}

int main(){
    int *players;
    InitPointer(&players,10,0);

   // int * players = malloc(sizeof (int) * PLAYER_COUNT);
    for(int i = 0;i<PLAYER_COUNT;++i){
        players[i] = i;
    }


    PRINT_INT_ARRAY(players,PLAYER_COUNT);
    // 不加free可能也会被回收

    //players = realloc()
    //
//    常见指针使用错误
//    忘记释放内存
//    使用了已经释放的内存
//    是用了超出边界的内存
//    改变内存指针导致无法正常释放

    free(players);

    return 0;
}