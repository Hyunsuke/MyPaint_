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
    sfTexture *texture_bkgd;
    sfSprite *sprite_bkgd;
    sfTexture *texture_notepad;
    sfSprite *sprite_notepad;
    short test;
} paint_t;

// Create background texture & sprite.
int create_background(paint_t *p);
// Create notepad texture & sprite.
int create_notepad(paint_t *p);

void draw_sprites(sfRenderWindow *window, paint_t *p);

void analyse_events(sfEvent event, paint_t *p);

void setup_sprites(paint_t *p);

int close_one(sfRenderWindow *window, sfEvent event);

#endif /* !paint_h */
