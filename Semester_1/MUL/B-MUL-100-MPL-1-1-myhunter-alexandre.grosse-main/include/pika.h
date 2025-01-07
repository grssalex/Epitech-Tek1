/*
** EPITECH PROJECT, 2024
** B-MUL-100-MPL-1-1-myhunter-alexandre.grosse
** File description:
** pika
*/

#include <SFML/Graphics.h>
#include <SFML/System.h>

#ifndef PIKA_H
    #define PIKA_H
    #define FRAME_COUNT 4
    #define FRAME_DURATION 0.5f

typedef struct pikachu {
    sfTexture *pikaTextures[FRAME_COUNT];
    sfSprite *pikaSprite;
    int currentFrame;
    sfClock *frameClock;
} pika_t;

int init_pika(pika_t *pika);
void update_pika(pika_t *pika);
void draw_pika(sfRenderWindow *window, pika_t *pika);
void destroy_pika(pika_t *pika);

#endif /* !PIKA_H */
