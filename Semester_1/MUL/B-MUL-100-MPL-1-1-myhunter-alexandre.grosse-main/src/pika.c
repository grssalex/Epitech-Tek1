/*
** EPITECH PROJECT, 2024
** B-MUL-100-MPL-1-1-myhunter-alexandre.grosse
** File description:
** pika
*/

#include "../include/pika.h"
#include <stdlib.h>
#include <stdio.h>

/*
** permet de supp les textures de pikachu
*/
int check_and_destroy_textures(sfTexture **pikaTextures, int i)
{
    for (int j = 0; j < i; j++) {
        sfTexture_destroy(pikaTextures[j]);
    }
    return EXIT_FAILURE;
}

const char **get_frame_files(void)
{
    static const char *frameFiles[FRAME_COUNT] = {
        "./src/img/pikaframe/frame1.png",
        "./src/img/pikaframe/frame2.png",
        "./src/img/pikaframe/frame3.png",
        "./src/img/pikaframe/frame4.png",
    };

    return frameFiles;
}

/*
** implémente pikachu avec ses frames dans le code
*/
int init_pika(pika_t *pika)
{
    const char **frameFiles = get_frame_files();

    for (int i = 0; i < FRAME_COUNT; i++) {
        pika->pikaTextures[i] = sfTexture_createFromFile(frameFiles[i], NULL);
        if (!pika->pikaTextures[i]) {
            check_and_destroy_textures(pika->pikaTextures, i);
            return EXIT_FAILURE;
        }
    }
    pika->pikaSprite = sfSprite_create();
    sfSprite_setTexture(pika->pikaSprite, pika->pikaTextures[0], sfTrue);
    sfSprite_setScale(pika->pikaSprite, (sfVector2f){5, 5});
    sfSprite_setPosition(pika->pikaSprite, (sfVector2f){1500, 600});
    pika->currentFrame = 0;
    pika->frameClock = sfClock_create();
    return EXIT_SUCCESS;
}

/*
** s'occupe d'update la frame de pikachu pour le rendre "animé"
*/
void update_pika(pika_t *pika)
{
    if (sfClock_getElapsedTime(pika->frameClock).microseconds /
        1000000.0f > FRAME_DURATION) {
        pika->currentFrame =
            (pika->currentFrame + 1) % FRAME_COUNT;
        sfSprite_setTexture(pika->pikaSprite,
            pika->pikaTextures[pika->currentFrame], sfTrue);
        sfClock_restart(pika->frameClock);
    }
}

/*
** affiche pikachu a l'écran
*/
void draw_pika(sfRenderWindow *window, pika_t *pika)
{
    sfRenderWindow_drawSprite(window, pika->pikaSprite, NULL);
}
