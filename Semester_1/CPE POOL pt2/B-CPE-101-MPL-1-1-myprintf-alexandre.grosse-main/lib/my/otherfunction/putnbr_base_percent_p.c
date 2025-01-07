/*
** EPITECH PROJECT, 2024
** Pool
** File description:
** bsprintf.h
*/
#include "../../../include/my.h"

void my_put_nbr_base(unsigned long nbr, char *base)
{
    unsigned long base_len = my_strlen(base);

    if (nbr >= base_len)
        my_put_nbr_base(nbr / base_len, base);
    my_putchar(base[nbr % base_len]);
}
