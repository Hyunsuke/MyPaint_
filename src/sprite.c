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
    sfRenderWindow_drawRectangleShape(window, p->rectangle_draw, NULL);
    sfRenderWindow_drawSprite(window, p->sprite_tools, NULL);
}

void setup_sprites(paint_t *p)
{
    sfVector2f pos = {0, 0}; sfVector2f scale = {1, 1};
    p->sprite_background = my_getsprite("assets/background.jpg", pos, scale);
    sfVector2f pos_notepad = {475, 120};
    p->sprite_notepad = my_getsprite("assets/notepad.png", pos_notepad, scale);
    sfVector2f pos_rect = {482, 278}; sfVector2f size_rect = {928, 513};
    p->rectangle_draw = my_getrectangle(pos_rect, size_rect);
    sfVector2f pos_tools = {1500, 350}; sfVector2f scale_tools = {1, 1};
    p->sprite_tools =
    my_getsprite("assets/tools/tab_tools.png", pos_tools, scale_tools);
}
