//
// Created by lenovo on 2023/11/23.
//

#include <stdio.h>
#define SIZE 4


int main(void)
{
    short dates[SIZE];
    short *ptj;
    short index;
    double bills[SIZE];
    double *ptf;
    ptj =dates;
    ptf =bills;

    printf("%23s %15s\n","short","double");
    for (index = 0; index < SIZE; index++) {
        printf("pointers +%d: %10p %10p\n",index,ptj+index,ptf+index );
    }
    return 0;
}