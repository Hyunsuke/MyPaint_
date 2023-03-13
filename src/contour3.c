/*
** EPITECH PROJECT, 2023
** contour3.c
** File description:
** contour3
*/
#include "paint.h"

void set_color(paint_t *p)
{
    sfRectangleShape_setOutlineColor(p->rect1_bck, sfWhite);
    if (p->CircleShapeDraw == true)
        sfCircleShape_setFillColor(p->ci_option1, sfWhite);
    else
        sfRectangleShape_setFillColor(p->rect_option1, sfWhite);
}

void rect_and_circle_contour1(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= 404 && x <= 449) {
        if (y >= 533 && y <= 578) {
            set_color(p);
        } else {
            set_color2(p);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->rect1_bck, sfBlack);
        if (p->CircleShapeDraw == true)
            sfCircleShape_setFillColor(p->ci_option1, sfBlack);
        else
            sfRectangleShape_setFillColor(p->rect_option1, sfBlack);
    }
}

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
