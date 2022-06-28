//
// Created by Innocent on 6/28/22.
//
#include "stdlib.h"
#include "stdio.h"
#include "io_utils.h"
#include "string.h"


#define SWAP(a,b,type){ type temp = a; a = b;b = temp;}
#define SWAP2(a,b){ typeof(a) temp = a; a = b;b = temp;}
// 传入后等于没传
int traditionSwap(a,b){
    int temp = a;
    a = b;
    b = temp;
}
// 指针传入
void ptrSwap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap(void *a,void *b,size_t size){
    void *temp = malloc(size);
    if(temp){
        memcpy(temp,a,size);
        memcpy(a, b,size);
        memcpy(b,temp,size);
        free(temp);
    } else{
        //...
        printf("error");
    }
}

//  数组可以交换是因为把起始地址传入了进去，而数值不行
// 配列は開始アドレスが渡されるためスワップ可能だが、値は不可能
void SwapElement(int array[],int first,int second){
    int temp = array[first];
    array[first] = array[second];
    array[second] = temp;
}



int main(){
    int a = 3,b = 4;
    printf("usual swap(answer is wrong)\n");
    traditionSwap(a,b);
    PRINT_INT(a);
    PRINT_INT(b);
    printf("swap\n");
    ptrSwap(&a,&b);
    PRINT_INT(a);
    PRINT_INT(b);
    printf("new swap\n");
    int c = 3,d = 4;
    Swap(&c,&d,sizeof (int));
    PRINT_INT(c);
    PRINT_INT(d);
    printf("define swap\n");
    int e = 1,f = 2;
    SWAP(e,f,int);
    PRINT_INT(e);
    PRINT_INT(f);
    printf("define swap 2 (with no type)\n");
    int g = 1,h = 2;
    SWAP2(g,h);
    PRINT_INT(g);
    PRINT_INT(h);
    printf("ok\n");

}
