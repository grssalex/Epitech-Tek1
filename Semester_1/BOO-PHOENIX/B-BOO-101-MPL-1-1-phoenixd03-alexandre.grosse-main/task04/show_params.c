/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd03-alexandre.grosse
** File description:
** show_params
*/

#include <stdio.h>
#include "../includes/phoenix.h"

int main(int argc, char *argv[])
{
    int i = 0;

    while (i < argc){
        show_string(argv[i]);
        show_string("\n");
        i++;
    }
    return 0;
}
