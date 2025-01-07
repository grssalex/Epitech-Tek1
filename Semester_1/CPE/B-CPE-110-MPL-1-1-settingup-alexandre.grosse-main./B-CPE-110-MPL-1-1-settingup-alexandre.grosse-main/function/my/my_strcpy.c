/*
** EPITECH PROJECT, 2024
** my_strcpy.c
** File description:
** --
*/

/*
** fonction qui copie une chaine de caractère
** passé en paramètre dans une autre chaine de caractère
** et retourne la chaine de caractère
*/
char *my_strcpy(char *dest, char const *src)
{
    int tempo;

    for (tempo = 0; src[tempo] != '\0'; tempo++){
        dest[tempo] = src[tempo];
    }
    dest[tempo] = '\0';
    return dest;
}
