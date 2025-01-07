/*
** EPITECH PROJECT, 2024
** B-CPE-101-MPL-1-1-myprintf-hugo.soulet
** File description:
** percent_e2222.c
*/
#include "../../../include/my.h"
#include <stdio.h>

int percent_e4(float *nb, int *a, int *b)
{
    if (*nb < 0) {
        my_putchar('-');
        *nb = - *nb;
        (*a)++;
        (*b)++;
        return 1;
    }
    return 0;
}

int percent_e3(float *nb, int *a)
{
    while (*nb >= 10) {
        *nb /= 10;
        (*a)++;
    }
    while (*nb < 1) {
        *nb *= 10;
        (*a)--;
    }
}

int percent_e2(int a)
{
    my_putchar('e');
    if (a >= 0) {
        my_putchar('+');
    } else {
        my_putchar('-');
        a = -a;
    }
    if (a < 10) {
        my_putchar('0');
    }
    my_put_nbr(a);
}

int percent_e(float nb, int c, int precision, format_detection_t format_info)
{
    int a = 0;
    int b = 6;

    if (nb == 0.0) {
        my_putstr("0.0e+00");
        return 7;
    }
    percent_e4(&nb, &a, &b);
    percent_e3(&nb, &a);
    my_putfloat(nb, c, precision, format_info);
    percent_e2(a);
    return precision + b;
}

int handle_e(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    return percent_e(va_arg(arguments, double), 0, 6, format_info);
}
