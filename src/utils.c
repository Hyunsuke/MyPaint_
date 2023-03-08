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
        my_printf("Failed to load background texture\n");
        exit(84);
    }
    sfSprite *sprite = sfSprite_create();
    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, texture, sfFalse);
    return sprite;
}

/*
sfRectangleShape my_getRectangle(sfVector2f pos,)
{
    sfRectangleShape *rectangle = sfRectangleShape_create();
    p->rectangle_size = (sfVector2f) {20, 20};
    sfRectangleShape_setOrigin(rectangle, origin_pos);
    sfRectangleShape_setPosition(rectangle, pos);
    return 0;
}
*/
