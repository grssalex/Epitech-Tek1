/*
** EPITECH PROJECT, 2024
** my_putchar
** File description:
** my_putchar
*/

#include <unistd.h>
#include "../../../include/my.h"



void my_putchar(char c)
{
    write(1, &c, 1);
}

int handle_c(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    my_putchar(va_arg(arguments, int));
    return 1;
}

int handle_percent(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    my_putchar('%');
    return 1;
}
