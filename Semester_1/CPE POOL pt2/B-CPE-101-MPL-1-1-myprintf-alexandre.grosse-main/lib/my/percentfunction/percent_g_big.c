/*
** EPITECH PROJECT, 2024
** MY8PRINTF
** File description:
** percent_g_big.c
*/

#include "../../../include/my.h"
#include <stdio.h>

int verify_big(float nb, int c, int precision)
{
    int somme = 0;
    float virg = nb - (int)nb;
    int iteration = 0;

    while (nb - (int)nb > 0 && iteration < 100) {
        nb *= 10;
        iteration++;
    }
    if (nbr_length(nb, somme) < precision) {
        while (nbr_length(nb, somme) < precision)
            precision--;
    }
    return precision;
}

int percent_g_big(float nb, int c, int precision,
    format_detection_t format_info)
{
    int somme = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    precision = verify_big(nb, c, precision);
    if (nbr_length((int)nb, somme) < 6)
        my_putfloat(nb, c, (precision - nbr_length((int)nb,
            somme)), format_info);
    else {
        precision--;
        percent_e(nb, c, precision, format_info);
        precision = precision + 5;
    }
    return precision + 1;
}

int handle_g_big(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    return percent_g(va_arg(arguments, double), 0, 6, format_info);
}
