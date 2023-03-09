/*
** EPITECH PROJECT, 2023
** paint
** File description:
** paint_h
*/
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <math.h>
#include "my.h"
#include "printf.h"

#ifndef paint_h
    #define paint_h

typedef struct paint_s {
    sfSprite *sprite_background;
    sfSprite *sprite_notepad;
    sfSprite *sprite_tools;
    sfRectangleShape *rectangle_draw;
    short test;
    unsigned int window_x;
    unsigned int window_y;
} paint_t;

// Create background texture & sprite.
int create_background(paint_t *p);
// Create notepad texture & sprite.
int create_notepad(paint_t *p);

void draw_sprites(sfRenderWindow *window, paint_t *p);

void analyse_events(sfEvent event, paint_t *p);

void setup_sprites(paint_t *p);

int close_one(sfRenderWindow *window, sfEvent event);

sfSprite *my_getsprite(char *filepath, sfVector2f position, sfVector2f scale);
sfRectangleShape *my_getrectangle(sfVector2f pos, sfVector2f size);

#endif /* !paint_h */
