/*
** EPITECH PROJECT, 2024
** Pool
** File description:
** percent_x.c
*/

#include "../../../include/my.h"
#include <stdio.h>

int percent_x(int n, int base)
{
    char rev[50];
    int a = 0;

    if (n == 0) {
        my_putchar('0');
        return 1;
    }
    while (n > 0) {
        if ((n % base) < 10)
            rev[a] = '0' + (n % base);
        if ((n % base) >= 10)
            rev[a] = 'a' + ((n % base) - 10);
        n = n / base;
        a++;
    }
    for (int i = a - 1; i >= 0; i--) {
        my_putchar(rev[i]);
    }
    return a;
}

int handle_x(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    return percent_x(va_arg(arguments, int), 16);
}
