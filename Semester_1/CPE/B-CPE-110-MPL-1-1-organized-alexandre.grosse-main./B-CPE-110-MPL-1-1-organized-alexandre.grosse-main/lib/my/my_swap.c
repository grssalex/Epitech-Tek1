/*
** EPITECH PROJECT, 2024
** pool_review
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
