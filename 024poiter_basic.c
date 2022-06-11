//
// Created by Innocent on 5/30/22.
//

#include "stdio.h"
#include "io_utils.h"
#include "stdlib.h"
#include "time.h"
#define LEN 9

int  main(){
    int a;
    scanf("%d",&a);
    int *p = &a;
    int b = 3;
    PRINT_HEX(p);
    PRINT_HEX(&p);
    PRINT_INT(*p);
    PRINT_INT(a);
    int **pp = &p;
    // *pp = >p;
     *p = 20;

    PRINT_HEX(p);
    PRINT_INT(*p);

    PRINT_INT(a);

    int *const cp = &a;
    *cp = 2;
    //cp = &b;ERROR
    int const *const ccp = &a;
    int *const *cp2 = 2;
    cp2 = &b;

    return 0;
}
