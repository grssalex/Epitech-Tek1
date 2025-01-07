/*
** EPITECH PROJECT, 2024
** B-CPE-101-MPL-1-1-myprintf-hugo.soulet
** File description:
** handle_width.c
*/

#include "../../../include/my.h"
#include <stdarg.h>
#include <stdio.h>

int handle_dot(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    int nbr = 0;

    nbr = format[i + 2] - '0';
    i++;
    if (format[i + 2] >= 0 && format[i + 2] <= 9) {
    nbr = nbr + ((format[i] - '0') * 10);
    i++;
    }
    format_info.precision = nbr;
    call_percent2(format, arguments, i + 1, format_info);
    return 2;
}
