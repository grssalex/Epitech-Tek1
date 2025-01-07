/*
** EPITECH PROJECT, 2024
** B-CPE-101-MPL-1-1-myprintf-hugo.soulet
** File description:
** verify_format.c
*/

#include "../../../include/my.h"
#include <stdarg.h>
#include <stdio.h>

int verify_formatint(int nb, int c, int precision,
    format_detection_t format_info)
{
    if (format_info.plus == 1 && nb > 0)
    my_putchar('+');
    if (format_info.space == 1 && nb > 0)
    my_putchar(' ');
}

float verify_format(float nb, int c, int precision,
    format_detection_t format_info)
{
    if (format_info.plus == 1 && nb > 0)
    my_putchar('+');
    if (format_info.space == 1 && nb > 0)
    my_putchar(' ');
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    return nb;
}

int verify_precision(float nb, int c, int precision,
    format_detection_t format_info)
{
    if (format_info.precision > 0)
    precision = format_info.precision;
    return precision;
}
