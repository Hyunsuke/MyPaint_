/*
** EPITECH PROJECT, 2023
** fill_help.c
** File description:
** fill help
*/
#include "paint.h"

void fill_about_help(paint_t *p)
{
    if (p->isabclick == true)
        sfRectangleShape_setFillColor(p->about_rect, sfWhite);
    else
        sfRectangleShape_setFillColor(p->about_rect, sfTransparent);
    if (p->isheclick == true)
        sfRectangleShape_setFillColor(p->he_rect, sfWhite);
    else
        sfRectangleShape_setFillColor(p->he_rect, sfTransparent);
}

void check_help(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= 87 && event.x <= 387 && event.y >= 694 && event.y <= 742) {
        if (p->isabclick == false) {
            p->isabclick = true; p->isheclick = false;
        } else
            p->isabclick = false;
    }
    if (event.x >= 87 && event.x <= 387 && event.y >= 776 && event.y <= 823) {
        if (p->isheclick == false) {
            p->isheclick = true; p->isabclick = false;
        } else
            p->isheclick = false;
    }
}
