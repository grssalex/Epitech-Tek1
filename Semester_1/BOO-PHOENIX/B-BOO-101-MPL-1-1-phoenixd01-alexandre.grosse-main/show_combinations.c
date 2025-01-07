/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd01-alexandre.grosse
** File description:
** show_combinations
*/

#include <stdio.h>
#include "./include/my.h"

void check_num(int num)
{
    if (num != 789){
        my_putchar(',');
        my_putchar(' ');
    }
}

int show_combinations(void)
{
    int num = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    for (num = 12; num <= 789; num++){
        a = num / 100;
        b = (num / 10) % 10;
        c = num % 10;
        if (a < b && b < c){
            show_number(a);
            show_number(b);
            show_number(c);
            check_num(num);
        }
    }
    return 0;
}
