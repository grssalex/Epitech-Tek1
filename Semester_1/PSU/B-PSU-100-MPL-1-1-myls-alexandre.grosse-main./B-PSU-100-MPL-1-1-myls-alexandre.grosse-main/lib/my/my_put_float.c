/*
** EPITECH PROJECT, 2024
** my_put_float.c
** File description:
** --
*/

#include "../../include/my.h"

/*
** Cette fonction permet d'afficher un float (nb a virgule) en francais
** en prenant en compte les chiffres apres la virgule
** si il y en a pas, on affiche 0 apres la virgule
*/
void my_put_float(float num)
{
    int entier = (int)num;
    int decimal = (int)((num - entier) * 100);

    my_put_nbr(entier);
    my_putchar('.');
    if (decimal < 10) {
        my_putchar('0');
    }
    my_put_nbr(decimal);
}
