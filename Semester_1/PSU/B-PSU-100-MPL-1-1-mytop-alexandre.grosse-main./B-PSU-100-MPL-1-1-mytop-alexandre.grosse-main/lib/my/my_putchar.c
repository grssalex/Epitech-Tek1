/*
** EPITECH PROJECT, 2024
** my_putchar
** File description:
** fonction permettant d'écrire 1 caractère
*/
#include <unistd.h>
/*
** fonction qui permet d'écrire un caractère
** passé en paramètre et retourne 0
** il existe 3 types files descriptors le 0, 1 et 2
** 0 = entrée standard
** 1 = sortie standard
** 2 = sortie d'erreur
*/

int my_putchar(char c)
{
    write(1, &c, 1);
    return 0;
}
