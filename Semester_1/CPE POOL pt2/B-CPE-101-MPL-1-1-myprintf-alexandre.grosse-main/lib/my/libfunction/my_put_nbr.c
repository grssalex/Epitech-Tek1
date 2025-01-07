/*
** EPITECH PROJECT, 2024
** put nbr
** File description:
** put br
*/
#include "../../../include/my.h"
#include <unistd.h>
#include <stdio.h>

int my_put_nbr(int n)
{
    if (n < 0) {
        my_putchar('-');
        n = -n;
    }
    if (n >= 10) {
        my_put_nbr(n / 10);
    }
    my_putchar((n % 10) + '0');
    return 0;
}
