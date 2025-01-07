/*
** EPITECH PROJECT, 2024
** B-MUL-100-MPL-1-1-myhunter-alexandre.grosse
** File description:
** fnt
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

/*
** gestion des event du type "lorsque ..."
*/
int handle_events(csfml_t *csfml)
{
    while (sfRenderWindow_pollEvent(csfml->window, &csfml->event)) {
        if (csfml->event.type == sfEvtClosed) {
            sfRenderWindow_close(csfml->window);
            my_putstr("Closed : OK\n");
            return 1;
        }
        if (csfml->event.type == sfEvtMouseButtonPressed) {
            music_click_position(csfml);
        }
    }
    return 0;
}

int set_sprite_function(csfml_t *csfml)
{
    sfIntRect mobRect = {0, 0, 88, 88};

    csfml->mobSprite = sfSprite_create();
    csfml->clock = sfClock_create();
    sfSprite_setPosition(csfml->titlesprite, (sfVector2f){1400, 0});
    sfSprite_setScale(csfml->titlesprite, (sfVector2f){0.5, 0.5});
    sfSprite_setScale(csfml->backgroundSprite, (sfVector2f){3, 3});
    sfSprite_setTexture(csfml->titlesprite, csfml->titleTexture, sfTrue);
    sfSprite_setTexture(csfml->backgroundSprite, csfml->backgroundTexture,
        sfTrue);
    sfSprite_setPosition(csfml->mobSprite, (sfVector2f){300, 500});
    sfSprite_setTexture(csfml->mobSprite, csfml->mobTexture, sfTrue);
    sfSprite_setTextureRect(csfml->mobSprite, mobRect);
    sfSprite_setScale(csfml->mobSprite, (sfVector2f){2.0, 2.0});
    check_arg(csfml);
    return EXIT_SUCCESS;
}

/*
** initialise la fenetre et les textures de la fenetre
*/
int init_csfml(csfml_t *csfml)
{
    create_texture(csfml);
    set_sprite_function(csfml);
    if (!csfml->window)
        return EXIT_FAILURE;
    if (!csfml->backgroundTexture) {
        return EXIT_FAILURE;
        sfRenderWindow_destroy(csfml->window);
    }
    return EXIT_SUCCESS;
}

/*
** permet de gerer le temps et les compteurs
*/
void gest_time(csfml_t *csfml)
{
    static sfIntRect mobRect = {0, 0, 108, 88};
    sfTime time = sfClock_getElapsedTime(csfml->clock);
    float seconds = time.microseconds / 1000000.0;

    if (seconds > 0.07) {
        mobRect.left += 108;
        if (mobRect.left >= sfTexture_getSize(csfml->mobTexture).x) {
            mobRect.left = 0;
        }
        sfSprite_setTextureRect(csfml->mobSprite, mobRect);
        sfClock_restart(csfml->clock);
    }
}

/*
** boucle principale qui lorsque la fenetre est ouverte
** lance les events
*/
int main_loop(csfml_t *csfml)
{
    sfMusic_play(csfml->music);
    while (sfRenderWindow_isOpen(csfml->window)) {
        handle_events(csfml);
        update_pika(&csfml->pika);
        gest_time(csfml);
        sfRenderWindow_clear(csfml->window, sfBlack);
        sfRenderWindow_drawSprite(csfml->window, csfml->backgroundSprite,
            NULL);
        sfRenderWindow_drawSprite(csfml->window, csfml->titlesprite, NULL);
        sfRenderWindow_drawSprite(csfml->window, csfml->mobSprite, NULL);
        draw_pika(csfml->window, &csfml->pika);
        sfRenderWindow_display(csfml->window);
    }
    return 0;
}
