//
// Created by Innocent on 5/15/22.
#include "stdio.h"
#define MAX(a,b) (a) > (b) ? (a) : (b)
#define IS_HEX_CHARACTER(ch) \
((ch)>='0'&&(ch)<='9')||  \
((ch)>='a'&&(ch)<='f')||  \
((ch)>='A'&&(ch)<='F')
int main(){
    int max = MAX(1,3);
    int max2 = MAX(1, MAX(3,4));
    printf("%d\n",max);
    printf("%d\n",max2);
    printf("test HEX %d\n", IS_HEX_CHARACTER('C'));
    printf("test HEX %d\n", IS_HEX_CHARACTER('X'));
    printf("test HEX %d\n", IS_HEX_CHARACTER('8 '));
    return 0;
}