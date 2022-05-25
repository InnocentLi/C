//
// Created by Innocent on 5/15/22.
//
#include "stdio.h"

/*
 *  1.#ifdef   如果定义了
 *  2.#ifndef   如果没定义
 *  3。#if      如果
 *  #endif
 *  #if defined(MACRO) ==> #ifdef MACRO
 */
#define DEBUG

void dump(char *message){
#ifdef DEBUG
    puts(message);
#endif
}

int main(){
    dump("main start");
    printf("hello\n");
    dump("main end");
   // printf("__STDC_VERSION__: %ld\n",__STDC_VERSION__);
#if __STDC_VERSION__ >= 201112
    puts("C11 version");
#elif __STDC_VERSION__ >= 199901
    puts("C99 version");
#else
    puts("C90 version");
#endif
    return 0;
}