//
// Created by Innocent on 5/11/22.
//

//
// Created by Innocent on 5/11/22.
//
#include "stdio.h"
#include "stdarg.h"

void Move(n,A,B,C){
    if(n==0){
        return;
    }
    //MOVE n 起 目标 临时
    if(n==1){
        printf("%c --> %c\n",A,B);
    }else{
        Move(n-1,A,C,B);
        Move(1,A,B,C);
        Move(n-1,C,B,A);
    }

}

int main(){
    Move(3,'A','C','B');
}

