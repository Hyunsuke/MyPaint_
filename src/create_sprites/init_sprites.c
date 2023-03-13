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
    sfVector2f pos_p = {800, 870}; sfVector2f scale_p = {0.2, 0.2};
    p->plus = my_getsprite("assets/plus.png", pos_p, scale_p);
    sfVector2f pos_l = {960, 870}; sfVector2f scale_l = {0.2, 0.2};
    p->less = my_getsprite("assets/less.png", pos_l, scale_l);
    sfVector2f pos_pw = {800, 870}; sfVector2f scale_pw = {0.2, 0.2};
    p->plus_w = my_getsprite("assets/plus_w.png", pos_pw, scale_pw);
    sfVector2f pos_lw = {960, 870}; sfVector2f scale_lw = {0.2, 0.2};
    p->less_w = my_getsprite("assets/less_w.png", pos_lw, scale_lw);
}
