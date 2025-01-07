/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd01-alexandre.grosse
** File description:
** show_number
*/

#include "../../includes/phoenix.h"

int show_number(int nb)
{
    if (nb == -2147483648) {
        my_putchar('-');
        show_string("2147483648");
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        show_number(nb / 10);
    }
    my_putchar((nb % 10) + '0');
    return 0;
}
