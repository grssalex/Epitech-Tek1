/*
** EPITECH PROJECT, 2024
** my_getnbr.c
** File description:
** my_getnbr.c
*/

#include <stdio.h>
#include <stdio.h>

int my_getnbr(char const *str)
{
    int index = 0;
    int nombre = 0;
    int signe = 1;

    while (str[index] != '\0' && (str[index] == '+' || str[index] == '-')) {
        if (str[index] == '-') {
            signe = signe * -1;
        }
        index++;
    }
    while (str[index] >= '0' && str[index] <= '9') {
        nombre = (nombre * 10) + (str[index] - '0');
        index++;
    }
    return (nombre * signe);
}
