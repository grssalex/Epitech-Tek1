/*
** EPITECH PROJECT, 2024
** Pool
** File description:
** nbr_length.c
*/
#include <stdio.h>

int nbr_length(int n, int somme)
{
    if (n < 0) {
        n *= - 1;
        somme++;
    }
    if (n >= 10) {
        while (n >= 10) {
            somme++;
            n = n / 10;
        }
    }
    return somme + 1;
}
