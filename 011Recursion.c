//
// Created by Innocent on 5/11/22.
//

//
// Created by Innocent on 5/11/22.
//
#include "stdio.h"
#include "stdarg.h"

unsigned int F(unsigned int i){
    if(i == 0){
        return 1;
    }else{
        return i*F(i-1);
    }
}
unsigned int FB(unsigned int i){
    if(i == 0){
        return 0;
    }else if(i == 1){
        return 1;
    }else{
        return FB(i-1)+FB(i-2);
    }
}

int main(){
    printf("3! %d\n",F(3));
    printf("5! %d\n",F(5));
    printf("7! %d\n",F(7));

    printf("FB:1 %d\n",FB(1));
    printf("FB:2 %d\n",FB(2));
    printf("FB:3 %d\n",FB(3));
    printf("FB:4 %d\n",FB(4));
    printf("FB:5 %d\n",FB(5));
    printf("FB:10 %d\n",FB(10));
    printf("FB:20 %d\n",FB(20));

}
