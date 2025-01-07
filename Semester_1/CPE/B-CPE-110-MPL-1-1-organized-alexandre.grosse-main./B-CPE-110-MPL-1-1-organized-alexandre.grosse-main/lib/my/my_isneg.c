/*
** EPITECH PROJECT, 2024
** pool_review
** File description:
** my_isneg
*/

#include "../../include/my.h"

int my_isneg(int n)
{
    if (n > 0){
        my_putchar('P');
    }
    if (n <= 0){
        my_putchar('N');
    }
    return 0;
}
