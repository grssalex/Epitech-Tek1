/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        i++;
    }
    return i;
}
