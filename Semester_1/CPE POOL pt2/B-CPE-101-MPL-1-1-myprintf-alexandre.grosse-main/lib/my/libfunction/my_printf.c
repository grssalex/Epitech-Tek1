/*
** EPITECH PROJECT, 2024
** Pool
** File description:
** my_printf.c
*/

#include "../../../include/my.h"
#include <stdarg.h>
#include <stdio.h>

int if_flags(const char *format, va_list arguments, int i)
{
    if (format[i + 1] == '+' || format[i + 1] == ' ') {
        i++;
    }
    return i;
}

int my_printf(const char *format, ...)
{
    va_list arguments;
    int somme = 0;

    va_start(arguments, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
        somme = somme + call_percent(format, arguments, i);
        i = if_flags(format, arguments, i);
        i++;
        } else {
        my_putchar(format[i]);
        somme++;
        }
    }
    va_end(arguments);
    return somme;
}
