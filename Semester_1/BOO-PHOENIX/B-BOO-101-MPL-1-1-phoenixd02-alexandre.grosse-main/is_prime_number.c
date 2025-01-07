/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd02-alexandre.grosse
** File description:
** is_prime_number
*/

int is_prime_number(int nb)
{
    if (nb <= 1)
        return 0;
    for (int i = 2; i * i <= nb; i++){
        if (nb % i == 0)
            return 0;
    }
    return 1;
}
