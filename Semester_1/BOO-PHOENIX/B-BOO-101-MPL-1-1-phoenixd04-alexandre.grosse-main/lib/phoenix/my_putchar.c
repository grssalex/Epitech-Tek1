/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd03-alexandre.grosse
** File description:
** my_putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
