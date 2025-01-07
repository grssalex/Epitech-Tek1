/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int tempo1;

    tempo1 = *a;
    *a = *b;
    *b = tempo1;
}
