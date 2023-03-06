/*
** EPITECH PROJECT, 2022
** CSFML
** File description:
** create_workplan.c
*/
#include "paint.h"

int create_background(paint_t *p)
{
    p->texture_bkgd = sfTexture_createFromFile("assets/background.jpg", NULL);
    if (p->texture_bkgd == NULL) {
        my_eprintf("Failed to load background texture\n");
        exit(84);
    }
    p->sprite_bkgd = sfSprite_create();
    sfVector2f my_pos = {0, 0};
    sfVector2f scale = {1, 1};
    sfSprite_setScale(p->sprite_bkgd, scale);
    sfSprite_setPosition(p->sprite_bkgd, my_pos);
    sfSprite_setTexture(p->sprite_bkgd, p->texture_bkgd, sfFalse);
    return 0;
}

int create_notepad(paint_t *p)
{
    p->texture_notepad = sfTexture_createFromFile("assets/notepad.png", NULL);
    if (p->texture_notepad == NULL) {
        my_eprintf("Failed to load notepad texture\n");
        exit(84);
    }
    p->sprite_notepad = sfSprite_create();
    sfVector2f my_pos = {485, 120};
    sfVector2f scale = {1, 1};
    sfSprite_setScale(p->sprite_notepad, scale);
    sfSprite_setPosition(p->sprite_notepad, my_pos);
    sfSprite_setTexture(p->sprite_notepad, p->texture_notepad, sfFalse);
    return 0;
}
