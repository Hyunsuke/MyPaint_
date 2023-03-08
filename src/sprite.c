/*
** EPITECH PROJECT, 2022
** CSFML
** File description:
** sprite.c
*/
#include "paint.h"

void draw_sprites(sfRenderWindow *window, paint_t *p)
{
    sfRenderWindow_drawSprite(window, p->sprite_background, NULL);
    sfRenderWindow_drawSprite(window, p->sprite_notepad, NULL);
    sfRenderWindow_draw
}

void setup_sprites(paint_t *p)
{
    sfVector2f pos = {0, 0};
    sfVector2f scale = {1, 1};
    p->sprite_backkground = my_getSprite("assets/background.jpg", pos, scale);
    p->sprite_notepad = my_getSprite("assets/notepad.png", pos, scale);
}
