/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** put str
*/

#include <unistd.h>
#include "../../../include/my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return 0;
}

int handle_s(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    return if_string(format, arguments, i);
}

int handle_i(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    int somme = 0;

    somme += if_nbr(format, arguments, i, format_info);
    return somme;
}

int handle_d(const char *format, va_list arguments,
    int i, format_detection_t format_info)
{
    int somme = 0;

    somme += if_nbr(format, arguments, i, format_info);
    return somme;
}
