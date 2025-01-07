/*
** EPITECH PROJECT, 2024
** Final Stumper
** File description:
** truc2
*/
#include "rush3.h"

int my_printsqr(int *square)
{
    my_putstr("[rush1-");
    my_putint(square[0]);
    my_putstr("] ");
    my_putint(square[1]);
    my_putchar(' ');
    my_putint(square[2]);
    my_putchar('\n');
    return 0;
}

int handle_equal(int *square)
{
    my_putstr("[rush1-3] ");
    my_putint(square[1]);
    my_putchar(' ');
    my_putint(square[2]);
    my_putstr(" || ");
    my_putstr("[rush1-4] ");
    my_putint(square[1]);
    my_putchar(' ');
    my_putint(square[2]);
    my_putstr(" || ");
    my_putstr("[rush1-5] ");
    my_putint(square[1]);
    my_putchar(' ');
    my_putint(square[2]);
    my_putchar('\n');
    return 0;
}

int handle_special_cases(int *square)
{
    if (square[0] == 6)
        return handle_equal(square);
    return 0;
}

int handle_c(char *buf)
{
    int i = 1;

    while (buf[i + 2] != '\0') {
        i++;
    }
    if (buf[i] == 'C')
        return 4;
    if (buf[i] == 'A')
        return 5;
    my_putstr("Handle C Returned 0");
    return 0;
}

int handle_a(char *buf)
{
    int i = 1;

    while (buf[i + 1] != '\n') {
        i++;
    }
    if (buf[i] == 'A')
        return 3;
    if (buf[i] == 'C')
        return handle_c(buf);
    my_putstr("Handle A Returned 0");
    return 0;
}
