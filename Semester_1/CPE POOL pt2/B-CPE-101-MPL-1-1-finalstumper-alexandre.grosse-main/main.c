/*
** EPITECH PROJECT, 2024
** main final stumper
** File description:
** main
*/

#include "rush3.h"

int my_putcharo(char c)
{
    write(0, &c, 1);
    return 0;
}

int my_putstro(char *str)
{
    while (*str != '\0') {
        my_putcharo(*str);
        str++;
    }
    return 0;
}

int getsqr(void)
{
    int buff_size = 4098;
    char buff[buff_size + 1];
    int offset = 0;
    int len = read(0, buff + offset, buff_size - offset);
    int square[4] = {0};

    while (len > 0) {
        offset += len;
        len = read(0, buff + offset, buff_size - offset);
        if (offset == 4097) {
            my_puterr("none\n");
            return 84;
        }
    }
    buff[offset] = '\0';
    if (len < 0) {
        return (84);
    }
    return my_getsqr(square, buff);
}

int main(void)
{
    getsqr();
}
