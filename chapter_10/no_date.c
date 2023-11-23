//
// Created by lenovo on 2023/11/22.
//
#include <stdio.h>
#define SIZE 4

int main(void )
{
    int no_data[SIZE];
    int  i;

    printf("%2s%14s\n","i","no_data[i]");
    for (i = 0; i < SIZE; i++) {
        printf("%2s%14s\n",i,no_data[i]);
    }
    return 0;
}