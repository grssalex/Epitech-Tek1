/*
** EPITECH PROJECT, 2024
** pool_review
** File description:
** my_print_digits
*/

#include "../../include/my.h"

int my_print_digits(void)
{
    char *str = "123456789";
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
