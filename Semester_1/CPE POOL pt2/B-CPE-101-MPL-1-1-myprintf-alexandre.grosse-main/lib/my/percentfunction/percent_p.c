/*
** EPITECH PROJECT, 2024
** Pool
** File description:
** percent_p.c
*/
#include "../../../include/my.h"
#include <stdlib.h>

int percent_p(void *ptr)
{
    unsigned long address = (unsigned long)ptr;

    my_putstr("0x");
    my_put_nbr_base(address, "0123456789abcdef");
}

int handle_p(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    return percent_p(va_arg(arguments, void *));
}
