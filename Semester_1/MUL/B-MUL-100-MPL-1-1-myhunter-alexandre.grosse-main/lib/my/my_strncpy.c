/*
** EPITECH PROJECT, 2024
** lib_c
** File description:
** my_strncpy
*/

int my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] != '\0' && i < n) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return 0;
}
