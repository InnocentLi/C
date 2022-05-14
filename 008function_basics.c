//
// Created by Innocent on 5/10/22.
//
#include "stdio.h"
double f(double x){
    return x+x+x;
}

void EmptyParamList(){

}

int ADD(int x,int y){
    return x+y;
}
int main(){
    /*    <return>
     *   >>>statement
     *   return <return b  value>
     * */
    puts("hello");
    int a = f(2.0);

    printf("%d",a);
    puts("ADD");
    printf("%d",ADD(3,4));
    return 0;
}
