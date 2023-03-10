/*
** EPITECH PROJECT, 2023
** contour2.c
** File description:
** contour2
*/
#include "paint.h"

void mf_contour(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= 87 && x <= 387) {
        if (y >= 374 && y <= 422) {
            sfRectangleShape_setOutlineColor(p->of_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->of_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->of_rect, sfBlack);
    }
    if (x >= 87 && x <= 387) {
        if (y >= 457 && y <= 504) {
            sfRectangleShape_setOutlineColor(p->nf_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->nf_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->nf_rect, sfBlack);
    }
}

void mf_ed_contour(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= 87 && x <= 387) {
        if (y >= 538 && y <= 585) {
            sfRectangleShape_setOutlineColor(p->sf_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->sf_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->sf_rect, sfBlack);
    }
    if (x >= 87 && x <= 387) {
        if (y >= 533 && y <= 581) {
            sfRectangleShape_setOutlineColor(p->pen_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->pen_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->pen_rect, sfBlack);
    }
}

void ed_contour(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= 87 && x <= 387) {
        if (y >= 615 && y <= 663) {
            sfRectangleShape_setOutlineColor(p->er_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->er_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->er_rect, sfBlack);
    }
    if (x >= 87 && x <= 387) {
        if (y >= 698 && y <= 745) {
            sfRectangleShape_setOutlineColor(p->sq_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->sq_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->sq_rect, sfBlack);
    }
}

void ed_contour2(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= 87 && x <= 387) {
        if (y >= 779 && y <= 827) {
            sfRectangleShape_setOutlineColor(p->ci_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->ci_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->ci_rect, sfBlack);
    }
    if (x >= 87 && x <= 387) {
        if (y >= 861 && y <= 909) {
            sfRectangleShape_setOutlineColor(p->li_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->li_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->li_rect, sfBlack);
    }
}

void ed_he_contour(paint_t *p, sfRenderWindow *window)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;
    if (x >= 87 && x <= 387) {
        if (y >= 944 && y <= 992) {
            sfRectangleShape_setOutlineColor(p->pi_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->pi_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->pi_rect, sfBlack);
    }
    if (x >= 87 && x <= 387) {
        if (y >= 694 && y <= 742) {
            sfRectangleShape_setOutlineColor(p->about_rect, sfWhite);
        } else {
            sfRectangleShape_setOutlineColor(p->about_rect, sfBlack);
        }
    } else {
        sfRectangleShape_setOutlineColor(p->about_rect, sfBlack);
    }
}
