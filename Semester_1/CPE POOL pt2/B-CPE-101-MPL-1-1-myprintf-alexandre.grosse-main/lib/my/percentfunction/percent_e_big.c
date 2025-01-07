/*
** EPITECH PROJECT, 2024
** myprintf--fichier hugo
** File description:
** percent_e_big.c
*/

#include <stdio.h>
#include <math.h>
#include "../../../include/my.h"

int percent_e4_big(float *nb, int *a, int *b)
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

int percent_e3_big(float *nb, int *a)
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

int percent_e2_big(int a)
{
    my_putchar('E');
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

int percent_e_big(float nb, int c, int precision,
    format_detection_t format_info)
{
    int a = 0;
    int b = 6;

    if (nb == 0.0) {
        my_putstr("0.0E+00");
        return 7;
    }
    percent_e4_big(&nb, &a, &b);
    percent_e3_big(&nb, &a);
    my_putfloat(nb, c, precision, format_info);
    percent_e2_big(a);
    return precision + b;
}

int handle_e_big(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    return percent_e_big(va_arg(arguments, double), 0, 6, format_info);
}
