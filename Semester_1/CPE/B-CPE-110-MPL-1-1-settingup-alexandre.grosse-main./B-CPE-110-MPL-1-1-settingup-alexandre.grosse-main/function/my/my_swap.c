/*
** EPITECH PROJECT, 2024
** my_swap
** File description:
** A affiche valeur B et B affiche valeur A
*/

/*
** fonction qui permet d'échanger la valeur de 2 entiers
** passé en paramètre et retourne 0
*/
void my_swap(int *a, int *b)
{
    int tempo1;

    tempo1 = *a;
    *a = *b;
    *b = tempo1;
}
