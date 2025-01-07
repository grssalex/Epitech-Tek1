/*
** EPITECH PROJECT, 2024
** B-BOO-101-MPL-1-1-phoenixd03-alexandre.grosse
** File description:
** sorted_params
*/

#include "../includes/phoenix.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    for (; s1[i] != '\0' && s2[i] != '\0'; i++){
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    }
    return 0;
}

void change_sort(int i, int j, char **argv)
{
    char *temp;

    if (my_strcmp(argv[i], argv[j]) > 0) {
        temp = argv[i];
        argv[i] = argv[j];
        argv[j] = temp;
    }
}

void sort_params(int argc, char **argv)
{
    for (int i = 0; i < argc; i++) {
        for (int j = i + 1; j < argc; j++) {
            change_sort(i, j, argv);
        }
    }
}

int main(int argc, char **argv)
{
    sort_params(argc, argv);
    for (int i = 0; i < argc; i++) {
        show_string(argv[i]);
        show_string("\n");
    }
    return 0;
}
