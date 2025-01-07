/*
** EPITECH PROJECT, 2024
** myprintf--fichier hugo
** File description:
** percent_o.c
*/
#include "../../../include/my.h"
#include <stdarg.h>

int percent_o(unsigned int n, int base)
{
    char rev[50];
    int a = 0;

    if (base != 8)
        return -1;
    if (n == 0) {
        my_putchar('0');
        return 1;
    }
    while (n > 0) {
        rev[a] = '0' + (n % base);
        n = n / base;
        a++;
    }
    for (int i = a - 1; i >= 0; i--)
        my_putchar(rev[i]);
    return a;
}

int handle_o(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    return percent_o(va_arg(arguments, int), 8);
}
