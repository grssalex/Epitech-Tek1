/*
** EPITECH PROJECT, 2024
** lib_c
** File description:
** my_tolowercase
*/

int my_tolowercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    return 0;
}
