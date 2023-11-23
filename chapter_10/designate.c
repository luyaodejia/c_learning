//
// Created by lenovo on 2023/11/23.
//


#include <stdio.h>
#define  MONTHS 12

int main(void)
{
    //传统的语法
    // int arr[6] = {0,0,0,0,0,21};
    //c99写法
    int days[MONTHS] = {31,[4]=31,30,31,[1]=29};
    int i;
    for (i = 0;  i< MONTHS; i++) {
        printf("%2d %d\n",i+1,days[i]);
    }
    return 0;
}