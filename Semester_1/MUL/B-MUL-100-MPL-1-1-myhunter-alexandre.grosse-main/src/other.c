/*
** EPITECH PROJECT, 2024
** B-MUL-100-MPL-1-1-myhunter-alexandre.grosse
** File description:
** other
*/

#include "../include/pika.h"
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"
#include <string.h>

/*
** supp pika lors de la fermeture de la fenêtre
*/
void destroy_pika(pika_t *pika)
{
    for (int i = 0; i < FRAME_COUNT; i++) {
        sfTexture_destroy(pika->pikaTextures[i]);
    }
    sfSprite_destroy(pika->pikaSprite);
    sfClock_destroy(pika->frameClock);
}

void destroy(csfml_t *csfml)
{
    sfSprite_destroy(csfml->backgroundSprite);
    sfTexture_destroy(csfml->backgroundTexture);
    destroy_pika(&csfml->pika);
    sfRenderWindow_destroy(csfml->window);
    sfClock_destroy(csfml->clock);
    sfMusic_destroy(csfml->music);
    sfSound_destroy(csfml->sound);
    sfSoundBuffer_destroy(csfml->soundBuffertalmo);
    sfTexture_destroy(csfml->mobTexture);
    sfSprite_destroy(csfml->mobSprite);
    sfTexture_destroy(csfml->titleTexture);
    sfSprite_destroy(csfml->titlesprite);
}

void create_texture(csfml_t *csfml)
{
    sfVideoMode mode = {1920, 1080, 32};

    csfml->backgroundSprite = sfSprite_create();
    csfml->music = sfMusic_createFromFile("./src/sound.ogg");
    sfMusic_setVolume(csfml->music, 20.0f);
    csfml->titlesprite = sfSprite_create();
    csfml->titleTexture = sfTexture_createFromFile("./src/img/newtitle.png",
        NULL);
    csfml->backgroundTexture = sfTexture_createFromFile("./src/img/back3.png",
        NULL);
    csfml->mobTexture = sfTexture_createFromFile("./src/img/pkmframe.png",
        NULL);
    csfml->window = sfRenderWindow_create(mode, "MyHunter - Pikachu & Friends",
        sfClose, NULL);
}

int init_sound(csfml_t *csfml)
{
    csfml->soundBuffertalmo = sfSoundBuffer_createFromFile("./src/talmo.ogg");
    if (!csfml->soundBuffertalmo) {
        my_putstr("Erreur lors du chargement du fichier audio\n");
        return EXIT_FAILURE;
    }
    csfml->sound = sfSound_create();
    if (!csfml->sound) {
        my_putstr("Erreur lors de la création de l'objet son\n");
        sfSoundBuffer_destroy(csfml->soundBuffertalmo);
        return EXIT_FAILURE;
    }
    sfSound_setBuffer(csfml->sound, csfml->soundBuffertalmo);
    return EXIT_SUCCESS;
}

void music_click_position(csfml_t *csfml)
{
    sfVector2i mousePos = sfMouse_getPositionRenderWindow(csfml->window);
    sfFloatRect mobBounds = sfSprite_getGlobalBounds(csfml->mobSprite);
    int x;
    int y;

    if (csfml->event.mouseButton.button == sfMouseLeft){
        if (sfFloatRect_contains(&mobBounds, mousePos.x, mousePos.y)){
            sfSound_play(csfml->sound);
            x = rand() % (1920 - 88);
            y = rand() % (1080 - 88);
            sfSprite_setPosition(csfml->mobSprite, (sfVector2f){x, y});
        }
    }
}
