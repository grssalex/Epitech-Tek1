/*
** EPITECH PROJECT, 2024
** ultimate_lib_c
** File description:
** my_concat_params
*/

char *my_concat_strings(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0'){
        i++;
    }
    while (src[j] != '\0'){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}
