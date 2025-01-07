/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd01-alexandre.grosse
** File description:
** show_alphabet
*/

#include "./include/my.h"

int show_alphabet(void)
{
    char letter = 'a';

    while (letter != 'z'){
        my_putchar(letter);
        letter++;
    }
    my_putchar(letter);
    return 0;
}
