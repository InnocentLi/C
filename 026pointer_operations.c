//
// Created by Innocent on 6/12/22.
//

#include "stdio.h"

#include "io_utils.h"
//       [0] [1] [2] [3] [4] [5] [6]
//            ▲       ▲
//           p+2     p+4
int main() {
    int a = 2;
    int *p = &a;

    PRINT_INT(p);
    PRINT_INT(p + 1);
    PRINT_INT(sizeof(int));

    int array[] = {0, 1, 2, 3, 4};
    int *pp = array;
    PRINT_INT(*(pp + 3));     // ✓
    PRINT_INT(array[3]);    // ✓
    PRINT_INT(pp[3]);
    PRINT_INT(*(array + 3));
    PRINT_INT(*(array + 3));
    PRINT_INT(3[array]);
    int *const array_p = array;

    PRINT_BOOL(p+3>p+1);
    PRINT_BOOL(p+3==p+3);  // meaning

}