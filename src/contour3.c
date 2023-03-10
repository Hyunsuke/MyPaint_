/*
** EPITECH PROJECT, 2023
** contour3.c
** File description:
** contour3
*/
#include "paint.h"

void he_contour(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= 87 && x <= 387) {
        if (y >= 776 && y <= 824) {
            sfRectangleShape_setOutlineColor(p->he_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->he_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->he_rect, sfBlack);
    }
}

void exit_color(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= 1647 && x <= 1777) {
        if (y >= 919 && y <= 974) {
            sfText_setColor(p->ab_exit, sfWhite);
        } else {
            sfText_setColor(p->ab_exit, sfBlack);
        }
    } else {
        sfText_setColor(p->ab_exit, sfBlack);
    }
    if (x >= 1647 && x <= 1777) {
        if (y >= 919 && y <= 974) {
            sfText_setColor(p->he_exit, sfWhite);
        } else {
            sfText_setColor(p->he_exit, sfBlack);
        }
    } else {
        sfText_setColor(p->he_exit, sfBlack);
    }
}
