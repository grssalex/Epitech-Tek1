/*
** EPITECH PROJECT, 2024
** pool_review
** File description:
** my_putchar
*/

#include <stdio.h>
#include <stddef.h>
#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
