//
// Created by lenovo on 2023/11/23.
//

#include <stdio.h>
#define SIZE 4

int main(void)
{
    int some_data[SIZE] = {1492,1066};
    int i;

    for (i = 0; i < SIZE; i++) {
        printf("%2d%8d\n",i,some_data[i]);
    }
    return 0;
}
