/*
** EPITECH PROJECT, 2024
** pool_review
** File description:
** my_print_alpha
*/

#include "../../include/my.h"

int my_print_alpha(void)
{
    char *str = "abcdefghijklmnopqrstuvwxyz\n";
    int i = 0;

    while (str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return 0;
}
