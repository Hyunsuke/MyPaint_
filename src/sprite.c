/*
** EPITECH PROJECT, 2022
** CSFML
** File description:
** sprite.c
*/
#include "paint.h"

void draw_sprites(sfRenderWindow *window, paint_t *p)
{
    sfRenderWindow_drawSprite(window, p->sprite_bkgd, NULL);
    sfRenderWindow_drawSprite(window, p->sprite_notepad, NULL);
}

void setup_sprites(paint_t *p)
{
    create_background(p);
    create_notepad(p);
}
