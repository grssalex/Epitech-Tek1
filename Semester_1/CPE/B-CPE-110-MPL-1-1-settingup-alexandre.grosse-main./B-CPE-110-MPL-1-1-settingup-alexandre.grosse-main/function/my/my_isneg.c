/*
** EPITECH PROJECT, 2024
** my_isneg.c
** File description:
** affiche N si chiffre <0 et <p si >= 0
*/

#include <unistd.h>
#include "../../include/my.h"
/*
** Fonction qui affiche N si le chiffre est
** négatif et P si le chiffre est positif
** et retourne 0
*/

int my_isneg(int nombre)
{
    if (nombre < 0) {
        my_putchar('N');
        return 1;
    } else {
        my_putchar('P');
        return 0;
    }
}
