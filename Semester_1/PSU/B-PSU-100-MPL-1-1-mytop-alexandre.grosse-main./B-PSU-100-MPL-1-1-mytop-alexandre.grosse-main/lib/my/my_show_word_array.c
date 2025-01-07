/*
** EPITECH PROJECT, 2024
** my_show_word_array.c
** File description:
** ----
*/

#include <stddef.h>
#include "../../include/my.h"

/*
** fonction qui affiche un tableau de chaine de caractère
** passé en paramètre et retourne 0
** tant que le tableau n'est pas fini
** on affiche chaque chaine de caractère
** avec un retour à la ligne
** et on retourne 0
*/
int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != NULL; i++){
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}
