/*
** EPITECH PROJECT, 2024
** lib
** File description:
** final strumper lib
*/

#include "rush3.h"
#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}

int my_putstr(char *str)
{
    while (*str != '\0') {
        my_putchar(*str);
        str++;
    }
    return 0;
}

int my_strlen(char *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
    }
    return i;
}

int my_revstr(char *str)
{
    char buffer = 0;
    int length = my_strlen(str);

    for (int i = 0; i < (length) / 2; i++) {
        buffer = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = buffer;
    }
    return 0;
}

int my_putint(int number)
{
    char str[64] = {0};

    if (number == 0)
        return my_putchar('0');
    for (int i = 0; number > 0; i++) {
        str[i] = (number % 10 + '0');
        number /= 10;
    }
    my_revstr(str);
    my_putstr(str);
    return 0;
}
