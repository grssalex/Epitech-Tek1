/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd01-alexandre.grosse
** File description:
** to_number
*/

#include <limits.h>

int to_number(char const *str)
{
    int i = 0;
    long nombre = 0;
    int signe = 1;

    while (str[i] != '\0' && (str[i] == '+' || str[i] == '-')) {
        if (str[i] == '-') {
            signe = signe * -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        nombre = (nombre * 10) + (str[i] - '0');
        if (nombre > INT_MAX || nombre < INT_MIN) {
            return 0;
        }
        i++;
    }
    return (int)(nombre * signe);
}
