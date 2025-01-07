/*
** EPITECH PROJECT, 2024
** B-MUL-100-MPL-1-1-myhunter-alexandre.grosse
** File description:
** fnt_next
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "../include/my.h"
#include "../include/pika.h"
#include <SFML/Audio.h>

void check_arg(csfml_t *csfml)
{
    if (init_pika(&csfml->pika) == EXIT_FAILURE) {
        sfRenderWindow_destroy(csfml->window);
    }
    if (init_sound(csfml) == EXIT_FAILURE) {
        sfRenderWindow_destroy(csfml->window);
    }
}
