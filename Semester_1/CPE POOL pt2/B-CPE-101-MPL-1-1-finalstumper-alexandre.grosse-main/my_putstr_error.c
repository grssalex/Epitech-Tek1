/*
** EPITECH PROJECT, 2024
** put error
** File description:
** put error
*/

#include <unistd.h>

int my_putchar2(char c)
{
    write(2, &c, 1);
    return 0;
}

int my_puterr(char *str)
{
    while (*str != '\0') {
        my_putchar2(*str);
        str++;
    }
    return 0;
}
