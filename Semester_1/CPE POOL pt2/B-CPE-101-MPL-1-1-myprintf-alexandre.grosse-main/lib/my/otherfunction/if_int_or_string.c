/*
** EPITECH PROJECT, 2024
** Pool
** File description:
** int or string
*/

#include "../../../include/my.h"

int if_string(const char *format, va_list arguments, int i)
{
    char const *somme = va_arg(arguments, char *);

    my_putstr(somme);
    return my_strlen(somme);
}

int if_nbr(const char *format, va_list arguments, int i,
    format_detection_t format_info)
{
    int j = 0;
    int g = va_arg(arguments, int);

    verify_formatint(g, i, j, format_info);
    my_put_nbr(g);
    return nbr_length(g, j);
}
