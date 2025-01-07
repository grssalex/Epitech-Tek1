/*
** EPITECH PROJECT, 2024
** main final stumper
** File description:
** main
*/

#include "rush3.h"

int my_getheight(char *buf)
{
    int i = 0;
    int count = 0;

    while (buf[i] != '\0') {
        if (buf[i] == '\n') {
            count++;
        }
        i++;
    }
    return count;
}

int my_getlen(char *buf)
{
    int i = 0;

    while (buf[i + 1] != '\0' && buf[i + 1] != '\n') {
        i++;
    }
    return i + 1;
}

int my_getformat(char *buf)
{
    if (buf[0] == 'o')
        return 1;
    if (buf[0] == '/' || buf[0] == '*')
        return 2;
    if (buf[0] == 'B')
        return 6;
    if (buf[0] == 'A')
        return handle_a(buf);
    return 0;
}

int my_getsqr(int *square, char *buf)
{
    square[0] = my_getformat(buf);
    square[1] = my_getlen(buf);
    square[2] = my_getheight(buf);
    if (square[0] > 5)
        return handle_special_cases(square);
    return my_printsqr(square);
}
