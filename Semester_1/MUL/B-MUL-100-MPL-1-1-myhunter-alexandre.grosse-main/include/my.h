/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** ----
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include "./pika.h"

#ifndef MY_H
  #define MY_H

int my_strlen(char const *str);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
void my_put_float(float num);
char *my_revstr(char *str);
char *my_strcpy(char *dest, char const *src);
char *my_strstr(char *str, char const *occur);
void my_swap(int *a, int *b);
int my_getnbr(char const *str);
int my_isneg(int nombre);

int my_strncpy(char *dest, char const *src, int n);
int my_strcmp(char const *string1, char const *string2);
char *my_strdup(char const *src);
int my_tolowercase(char *str);
int open_directory(char *path);

int fnt(void);
void display_title(sfRenderWindow *window);
  #define MAX_MOBS 10

typedef struct csfml {
    sfRenderWindow *window;
    sfEvent event;
    sfTexture *backgroundTexture;
    sfTexture *titleTexture;
    sfSprite *backgroundSprite;
    sfSprite *titlesprite;
    sfSprite *mobSprite;
    sfTexture *mobTexture;
    pika_t pika;
    sfClock *clock;
    sfSoundBuffer *buffer;
    sfMusic *music;
    sfSoundBuffer *soundBuffertalmo;
    sfSound *sound;
} csfml_t;

int init_csfml(csfml_t *csfml);
int main_loop(csfml_t *csfml);
void destroy(csfml_t *csfml);
void play_sound(const char *filepath);
void create_texture(csfml_t *csfml);

  #define FRAME_COUNT 4
  #define FRAME_DURATION 0.5f

typedef struct {
    sfTexture *pikachuTextures[FRAME_COUNT];
    sfSprite *pikachuSprite;
    int currentFrame;
    sfClock *frameClock;
} pikaframe_t;

int display_image(void);
int init_sound(csfml_t *csfml);
void music_click_position(csfml_t *csfml);
void check_arg(csfml_t *csfml);

#endif /* MY_H */
