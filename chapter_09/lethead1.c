//
// Created by lenovo on 2023/11/22.
//

#include <stdio.h>
#define NAME "WWW,INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "湖南省衡阳市"
#define WIDTH 40

/**
 * 函数原型
 */
void starbar(void);


/**
 * 主方法
 * @return 0
 */
int main(void)
{
    starbar();
    printf("%s\n",NAME);
    printf("%s\n",ADDRESS);
    printf("%s\n",PLACE);
    starbar();

    return 0;
}

/**
 * 定义函数
 */
void starbar(void)
{
  int count;

    for (count = 1; count < WIDTH; count++) {
        putchar('*');
    }
    putchar('\n');
}