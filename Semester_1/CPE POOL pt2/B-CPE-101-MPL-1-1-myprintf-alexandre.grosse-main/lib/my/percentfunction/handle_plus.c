/*
** EPITECH PROJECT, 2024
** B-CPE-101-MPL-1-1-myprintf-hugo.soulet
** File description:
** handle_plus.c
*/
#include "../../../include/my.h"
#include <stdarg.h>
#include <stdio.h>

int handle_plus(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    format_info.plus = 1;
    call_percent2(format, arguments, i + 1, format_info);
}
