//
// Created by Innocent on 6/30/22.
//
#include "stdio.h"
#include "io_utils.h"
#include "math.h"
#include <stdlib.h>
#include "time.h"
int main(){
    /*
     * struct<结构体名>{
     * <成员类型> <成员名>；
     * ...
     * }<结构体变量>；
     */
//    struct{
//        char *name;
//        int age;
//        char *id;
//    }anonymous_person;
//   这么定义也可以
//   加Person 可以重新定义结构体
//     传统命名方式。
//     struct Person{
//         char *name;
//         int age;
//         char *id;
//     };
//
     typedef struct Person{
         char *name;
         int age;
         char *id
     }Person;


     struct Person person={
         name:"innocent",
         age:12,
         id:"21897899"
     };
    //PRINT_INT(person.age);
    printf("算命大师2.0版本\n");
    printf("崔岩是否东大计算中。。。。\n");
    int a;
    srand((unsigned)time(NULL));
    a = rand()% 10;
    if(a<2){
        printf("东大合格\n", a);
    }
    else{
        printf("东大不合格\n", a);
    }
    //printf("%d\n", a);
    return 0;

    return 0;
}