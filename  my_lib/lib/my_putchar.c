/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** my_putchar
*/

#include <unistd.h>
#include "../include/lib.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
