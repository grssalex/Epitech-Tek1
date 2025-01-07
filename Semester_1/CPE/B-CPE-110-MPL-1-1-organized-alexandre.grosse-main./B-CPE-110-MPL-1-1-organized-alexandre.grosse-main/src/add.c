/*
** EPITECH PROJECT, 2024
** B-CPE-110-MPL-1-1-organized-alexandre.grosse
** File description:
** add
*/

#include "../include/my.h"
#include <stdlib.h>
#include <stdio.h>


linked_t *create_node(char *type, char *name, int id, void *data)
{
    linked_t *new_node = malloc(sizeof(linked_t));

    if (new_node == NULL)
        return NULL;
    new_node->type = type;
    new_node->name = name;
    new_node->id = id;
    new_node->next = data;
    data = new_node;
    return new_node;
}

int add(void *data, char **args)
{
    int i = 0;
    static int id = 0;
    char *type;
    char *name;
    linked_t *new_node = data;

    if (check_len_args(args) % 2 != 0)
        return 84;
    while (args[i] != NULL){
        type = my_strdup(args[i]);
        if (check_type(type) == 84)
            return 84;
        name = my_strdup(args[i + 1]);
        new_node = create_node(type, name, id, new_node);
        display_add(type, id, name);
        i += 2;
        id++;
    }
    return 0;
}
