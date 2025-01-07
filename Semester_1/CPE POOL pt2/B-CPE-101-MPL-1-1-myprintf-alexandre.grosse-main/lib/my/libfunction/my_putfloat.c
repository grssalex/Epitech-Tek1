/*
** EPITECH PROJECT, 2024
** Pool
** File description:
** my_putfloat.c
*/
#include "../../../include/my.h"
#include <stdio.h>

void my_putfloat2(float nb, int c, int precision)
{
    int somme = 0;

    if ((nbr_length((int)nb, somme) + precision + 1) < c) {
        while ((nbr_length((int)nb, somme) + precision + 1) < c) {
            my_putchar(' ');
            c--;
        }
    }
}

int my_putfloat(float nb, int c, int precision,
    format_detection_t format_info)
{
    float virg;
    int vent;
    int somme = 0;

    nb = verify_format(nb, c, precision, format_info);
    virg = nb - (int)nb;
    my_putfloat2(nb, c, precision);
    my_put_nbr((int)nb);
    my_putchar('.');
    for (int i = 0; i != precision; i++) {
        virg = (virg * 10);
        if ((i == precision - 1) && (virg - (int)virg >= 0.5))
            virg++;
        my_put_nbr((int)virg);
        virg = virg - (int)virg;
    }
    if (c > (nbr_length((int)nb, somme) + precision + 1))
        return c;
    return precision + 1 + nbr_length((int)nb, somme);
}

int handle_f(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    return my_putfloat(va_arg(arguments, double), 0, 6, format_info);
}
