/*
** EPITECH PROJECT, 2024
** my_put_nbr.c
** File description:
** --
*/

#include "../../include/my.h"
/*
** Fonction qui affiche un nombre
** le premeir if permet de gerer les nombres negatifs
** le deuxieme if permet de gerer les nombres superieurs a 10
** car on affiche les chiffres un par un en les divisant par 10
** et en les affichant a chaque fois
** le + 48 permet de passer du code ascii au chiffre
** (48 etant le code ascii de 0)
** et on affiche le reste de la division par 10
*/

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + 48);
}
