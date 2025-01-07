/*
** EPITECH PROJECT, 2024
** B-CPE-101-MPL-1-1-myprintf-hugo.soulet
** File description:
** space_positive_number.c
*/

#include "../../../include/my.h"
#include <stdarg.h>
#include <stdio.h>

int space_positive_number(const char *format, int i)
{
    if (format[i] == ' ') {
        my_putchar(' ');
        return space_positive_number(format, i + 1);
    }
    return i;
}

int handle_space(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    format_info.space = 1;
    call_percent2(format, arguments, i + 1, format_info);
    return 0;
}
