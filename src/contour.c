/*
** EPITECH PROJECT, 2023
** contour.c
** File description:
** contour
*/
#include "paint.h"

void file_contour(paint_t *p, sfRenderWindow *window)
{
    if (sfMouse_getPositionRenderWindow(window).x >= 64 &&
        sfMouse_getPositionRenderWindow(window).x <= 416) {
        if (sfMouse_getPositionRenderWindow(window).y >= 273 &&
            sfMouse_getPositionRenderWindow(window).y <= 349) {
            sfRectangleShape_setOutlineColor(p->file_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->file_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->file_rect, sfBlack);
    }
}

void edit_contour(paint_t *p, sfRenderWindow *window)
{
    if (sfMouse_getPositionRenderWindow(window).x >= 64 &&
        sfMouse_getPositionRenderWindow(window).x <= 416) {
        if (sfMouse_getPositionRenderWindow(window).y >= 431 &&
            sfMouse_getPositionRenderWindow(window).y <= 509) {
            sfRectangleShape_setOutlineColor(p->edition_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->edition_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->edition_rect, sfBlack);
    }
}

void help_contour(paint_t *p, sfRenderWindow *window)
{
    if (sfMouse_getPositionRenderWindow(window).x >= 64 &&
        sfMouse_getPositionRenderWindow(window).x <= 416) {
        if (sfMouse_getPositionRenderWindow(window).y >= 591 &&
            sfMouse_getPositionRenderWindow(window).y <= 668) {
            sfRectangleShape_setOutlineColor(p->help_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->help_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->help_rect, sfBlack);
    }
}
