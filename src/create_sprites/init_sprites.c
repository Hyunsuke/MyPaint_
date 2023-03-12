/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** init_sprites.c
*/
#include "paint.h"

void setup_sprites(paint_t *p)
{
    p->iseditopen = false; p->isfileopen = false; p->ishelpopen = false;
    sfVector2f pos = {0, 0}; sfVector2f scale = {1, 1};
    p->sprite_background = my_getsprite("assets/background.jpg", pos, scale);
    sfVector2f pos_notepad = {475, 120};
    p->sprite_notepad = my_getsprite("assets/notepad.png", pos_notepad, scale);
    sfVector2f pos_ab = {0, 0}; sfVector2f scale_ab = {1, 1};
    p->about_back = my_getsprite("assets/background.jpg", pos_ab, scale_ab);
}
