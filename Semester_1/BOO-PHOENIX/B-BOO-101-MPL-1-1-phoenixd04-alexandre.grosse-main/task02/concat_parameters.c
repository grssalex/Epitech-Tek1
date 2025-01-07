/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd04-alexandre.grosse
** File description:
** concact_parameters
*/

#include <stdlib.h>
#include <string.h>

char *my_strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0'){
        i++;
    }
    return i;
}

char *concat_parameters(int argc, char **argv)
{
    int len = 0;
    char *str_concat = NULL;

    for (int i = 0; i < argc; i++) {
        len += my_strlen(argv[i]) + 1;
    }
    str_concat = malloc(len);
    if (str_concat == NULL)
        return NULL;
    for (int j = 0; j < argc; j++) {
        my_strcat(str_concat, argv[j]);
        if (argv[j + 1] != NULL)
            my_strcat(str_concat, "\n");
    }
    return str_concat;
}
