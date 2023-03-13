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

void plus_contour(paint_t *p, sfRenderWindow *window)
{
    if (p->thickness == 55) {
        sfRenderWindow_drawSprite(window, p->plus_max, NULL);
        return;
    }
    if (sfMouse_getPositionRenderWindow(window).x >= 800 &&
        sfMouse_getPositionRenderWindow(window).x <= 900) {
        if (sfMouse_getPositionRenderWindow(window).y >= 873 &&
            sfMouse_getPositionRenderWindow(window).y <= 973)
            sfRenderWindow_drawSprite(window, p->plus_w, NULL);
        else
            sfRenderWindow_drawSprite(window, p->plus, NULL);
    } else
        sfRenderWindow_drawSprite(window, p->plus, NULL);
}

void less_contour(paint_t *p, sfRenderWindow *window)
{
    if (p->thickness == 5) {
        sfRenderWindow_drawSprite(window, p->less_max, NULL);
        return;
    }
    if (sfMouse_getPositionRenderWindow(window).x >= 962 &&
        sfMouse_getPositionRenderWindow(window).x <= 1062) {
        if (sfMouse_getPositionRenderWindow(window).y >= 873 &&
            sfMouse_getPositionRenderWindow(window).y <= 973)
            sfRenderWindow_drawSprite(window, p->less_w, NULL);
        else
            sfRenderWindow_drawSprite(window, p->less, NULL);
    } else
        sfRenderWindow_drawSprite(window, p->less, NULL);
}
