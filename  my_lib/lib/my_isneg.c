/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** my_isneg
*/

#include "../include/lib.h"

int my_isneg(int nb)
{
    if (nb < 0) {
        my_putchar('N');
        return 1;
    } else {
        my_putchar('P');
        return 0;
    }
}
