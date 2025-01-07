/*
** EPITECH PROJECT, 2024
** pool_review
** File description:
** my_print_revalpha
*/

#include "../../include/my.h"

int my_print_revalpha(void)
{
    char *str = "zyxwvutsrqponmlkjihgfedcba\n";
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
