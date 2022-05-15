//
// Created by Innocent on 5/15/22.
//

#include "../include/factorial.h"
unsigned int Factorial(unsigned int n){
    if(n ==0){
        return 1;
    }else{
        return n* Factorial(n-1);
    }
}

