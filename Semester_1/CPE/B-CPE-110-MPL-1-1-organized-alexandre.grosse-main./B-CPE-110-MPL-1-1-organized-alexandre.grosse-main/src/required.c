/*
** EPITECH PROJECT, 2024
** B-CPE-110-MPL-1-1-organized-alexandre.grosse
** File description:
** required
*/

#include <stdlib.h>
#include "../include/my.h"

int check_type(char *type)
{
    if (my_strcmp(type, "WIRE") == 0 ||
        my_strcmp(type, "DEVICE") == 0 ||
        my_strcmp(type, "PROCESSOR") == 0 ||
        my_strcmp(type, "ACTUATOR") == 0 ||
        my_strcmp(type, "SENSOR") == 0) {
        return 0;
    }
    my_putstr("\nError : invalid type\n");
    return 84;
}

int check_len_args(char **args)
{
    int i = 0;

    while (args[i] != NULL){
        i++;
    }
    return i;
}
