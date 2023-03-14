/*
** EPITECH PROJECT, 2023
** menu_file.c
** File description:
** menu file
*/
#include "paint.h"

void new_file(sfMouseButtonEvent event, paint_t *p, sfRenderWindow *window)
{
    if (event.x >= (87 * p->scale_x) && event.x <= (387 * p->scale_x) &&
        event.y >= (457 * p->scale_y) && event.y <= (504 * p->scale_y)) {
        start(p, window);
    }
}
