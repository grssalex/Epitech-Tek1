/*
** EPITECH PROJECT, 2024
** B-CPE-110-MPL-1-1-organized-alexandre.grosse
** File description:
** display
*/

#include "../include/my.h"
#include <stdlib.h>

int display_add(char *type, int id, char *name)
{
    my_putstr(type);
    my_putstr(" n°");
    my_put_nbr(id);
    my_putstr(" - ");
    my_putstr(name);
    my_putstr(" added.\n");
    return 0;
}
