//
// Created by lenovo on 2023/11/22.
//
//
// Created by lenovo on 2023/11/22.
//

#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK，INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis,CA 94903"
#define WIDTH 40
#define SPACE ' '

/**
 * 函数原型(有参)
 */
void show_n_char(char ch,int num);


/**
 * 主方法
 * @return 0
 */
int main(void)
{
    int spaces;

    show_n_char('*',WIDTH);
    putchar('\n');

    show_n_char(spaces,12);
    printf("%s\n",NAME);

    spaces = (WIDTH - strlen(ADDRESS))/2;
    show_n_char(SPACE,spaces);
    printf("%s\n",ADDRESS);

    show_n_char(SPACE,(WIDTH- strlen(PLACE))/2);
    printf("%s\n",PLACE);


    show_n_char('*',WIDTH);
    putchar('\n');
    return 0;
}

/**
 * 定义函数
 */
void show_n_char(char ch,int num)
{
    int count;
    for (count = 1; count < num; count++) {
        putchar(ch);
    }
}