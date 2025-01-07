/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd02-alexandre.grosse
** File description:
** iterative_factorial
*/

#include <limits.h>

int iterative_factorial(int nb)
{
    int fact = 1;
    int i = 1;

    if (nb >= 13)
        return 0;
    if (nb < 0)
        return 0;
    if (nb == 0)
        return 1;
    while (i <= nb){
        fact = fact * i;
        i++;
    }
    return fact;
}
