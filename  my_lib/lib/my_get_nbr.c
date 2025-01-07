/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** my_get_nbr
*/

#include <limits.h>

int my_get_nbr(char const *str)
{
    int i = 0;
    long nombre = 0;
    int signe = 1;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            signe *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nombre = (nombre * 10) + (str[i] - '0');
        if (nombre * signe > INT_MAX)
            return INT_MAX;
        if (nombre * signe < INT_MIN)
            return INT_MIN;
        i++;
    }
    return (int)(nombre * signe);
}
