//
// Created by Innocent on 5/12/22.
//
int	 printf(const char * __restrict, ...);
int	 puts(const char *);

//  源代码-->预处理器-->宏替换后源代码-->编译器-->中间文件-->链接器-->可执行程序
int main(){

    puts("hello world");

    printf("666");
    return 0;
}