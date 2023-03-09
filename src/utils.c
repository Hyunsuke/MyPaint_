/*
** EPITECH PROJECT, 2022
** CSFML
** File description:
** utils.c
*/
#include "paint.h"

sfSprite *my_getsprite(char *filepath, sfVector2f pos, sfVector2f scale)
{
    sfTexture *texture = sfTexture_createFromFile(filepath, NULL);
    if (texture == NULL) {
        exit(84);
    }
    sfSprite *sprite = sfSprite_create();
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfFalse);
    return sprite;
}

sfRectangleShape *my_getrectangle(sfVector2f pos, sfVector2f size)
{
    sfRectangleShape *rectangle = sfRectangleShape_create();
    sfRectangleShape_setSize(rectangle, size);
    sfRectangleShape_setPosition(rectangle, pos);
    sfRectangleShape_setOutlineThickness(rectangle, 3);
    sfRectangleShape_setOutlineColor(rectangle, sfBlack);
    return rectangle;
}
