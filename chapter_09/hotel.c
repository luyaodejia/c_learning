//
// Created by lenovo on 2023/11/22.
//
#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int code, status;
    printf("\n%s%s\n", STATS, STATS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) FairField Arms              2) Hotel olympic\n");
    printf("3) Chertworthy Plaze           4) The stockton\n");
    printf("5) quit\n");
    printf("\n%s%s\n", STATS, STATS);
    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5)) {
        if (status != 1)
            scanf("%*s");//处理非整数输入
        printf("Enter an integer from  1 to 5,please.\n");
    }
    return 0;
}


int getNights(void) {
    int nights;
    printf("How many nights are needed?");
    while (scanf("%d", &nights) != 1) {
        scanf("%*s");//处理非整数输入
        printf("please enter an integer,such as 2.\n");
    }
    return nights;
}


void showPrice(double rate, int nights) {
    int n;
    double total = 0.0;
    double factor = 1.0;

    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
        total += rate * factor;
    printf("The total cost will be $%0.2f.\n", total);
}
