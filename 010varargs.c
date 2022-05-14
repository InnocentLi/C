//
// Created by Innocent on 5/11/22.
//
#include "stdio.h"
#include "stdarg.h"
void HandleVarargs(int arg_count,...){
    //1。定义va_list 用于获取我们的变长参数
    va_list args;
   // 2。开始遍历
    va_start(args,arg_count);
    for(int i = 0;i<arg_count;++i){
    //取出对应参数
        int arg = va_arg(args,int);
        printf("i:%d args:%d\n",i,arg);
    }
    //结束
    va_end(args);
}

int main(){
    HandleVarargs(4,6,7,8,9);
    return 0;
}
