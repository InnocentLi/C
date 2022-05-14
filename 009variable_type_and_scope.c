//
// Created by Innocent on 5/10/22.
//



#include "stdio.h"
int global_var = 1;
void LocalStaticVar(void){
    // 静态变量
    // 1.作用域全局，内存
    // 自动变量
    // 1。函数，块作用域，随着函数和块退出而销毁
    // 2。没有默认值
    static int static_var = 0;
    int non_static_var = 0;

    printf("static var: %d\n",static_var++);
    printf("non static var: %d\n",non_static_var++);
}

void PassByMemory(int parameter){
    printf("%d",parameter);
}
void PassByRegister(register int parameter){
    printf("%d",parameter);
}


//double Sort(int size,int array[size]);
int main(){
    int value = 0;
    { //块作用域
        auto int value2 = 0;
        printf("%d\n",value2);
    }
    for(int i = 0;i<5;i++){
        LocalStaticVar();
    }

    return 0;
}
