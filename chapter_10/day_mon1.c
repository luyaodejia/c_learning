//
// Created by lenovo on 2023/11/22.
//
#include <stdio.h>

#define MONTHS 12

int main(void) {
    //注意 使用const申明数组 便不能再给它赋值
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 10, 9, 8, 7, 7, 5};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %2d day.\n",index+1,days[index]);

    return 0;
}