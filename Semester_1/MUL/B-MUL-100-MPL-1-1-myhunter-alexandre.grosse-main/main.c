/*
** EPITECH PROJECT, 2024
** B-MUL-100-MPL-1-1-myhunter-alexandre.grosse
** File description:
** main
*/

#include "./include/my.h"
#include "./include/pika.h"
#include <string.h>
#include <stdlib.h>

int creator(void)
{
    my_putstr("\n\n");
    my_putstr("Creator :\n\n");
    my_putstr("Alexandre Grosse\n");
    my_putstr("Epitech Student\n");
    my_putstr(" ");
    return 0;
}

int player_option(void)
{
    my_putstr("\n\n");
    my_putstr("Rules :\n\n");
    my_putstr("click on the pokemon to allow pikachu to gain energy.\n");
    my_putstr("When pikachu has 10 energy the game ends and you win\n\n");
    my_putstr("\n");
    my_putstr("Player Option :\n\n");
    my_putstr("press the right mouse click to recover");
    my_putstr("a point when you touch a pokemon\n");
    my_putstr("press ESCAPE to pause game and to resume\n");
    my_putstr("press pikachu with right click for sound\n\n");
    my_putstr("v1.0 - work with CSFML in C langage\n");
    my_putstr("Epitech Project {E} -  MyHunter - Novembre 2024\n\n\n");
    return 0;
}

int main(int argc, char **argv)
{
    csfml_t *csfml = malloc(sizeof(csfml_t));

    if (argc == 2 && my_strcmp(argv[1], "-h") == 0) {
        player_option();
        return 0;
    }
    if (argc == 2 && my_strcmp(argv[1], "-creator") == 0) {
        creator();
        return 0;
    }
    if (argc != 1) {
        my_putstr("Invalid argument\n");
        return 84;
    }
    if (init_csfml(csfml) == EXIT_FAILURE)
        return EXIT_FAILURE;
    main_loop(csfml);
    my_putstr("game launch\n");
    destroy(csfml);
    free(csfml);
}
