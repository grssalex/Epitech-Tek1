/*
** EPITECH PROJECT, 2024
** Pool
** File description:
** percent_u.c
*/

#include "../../../include/my.h"
#include <stdarg.h>

int percent_u(const char *format, va_list arguments, int i, int j)
{
    unsigned int nb = va_arg(arguments, unsigned int);

    my_put_nbr(nb);
    return nbr_length(nb, j);
}

int handle_u(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    return percent_u(format, arguments, i, 0);
}
