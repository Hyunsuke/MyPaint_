/*
** EPITECH PROJECT, 2023
** fill_edit.c
** File description:
** fill_edit
*/
#include "paint.h"

void fill_tools(paint_t *p)
{
    if (p->ispenclick == true)
        sfRectangleShape_setFillColor(p->pen_rect, sfWhite);
    else
        sfRectangleShape_setFillColor(p->pen_rect, sfTransparent);
    if (p->iserclick == true)
        sfRectangleShape_setFillColor(p->er_rect, sfWhite);
    else
        sfRectangleShape_setFillColor(p->er_rect, sfTransparent);
    if (p->issqclick == true)
        sfRectangleShape_setFillColor(p->sq_rect, sfWhite);
    else
        sfRectangleShape_setFillColor(p->sq_rect, sfTransparent);
    if (p->isciclick == true)
        sfRectangleShape_setFillColor(p->ci_rect, sfWhite);
    else
        sfRectangleShape_setFillColor(p->ci_rect, sfTransparent);
    if (p->isliclick == true)
        sfRectangleShape_setFillColor(p->li_rect, sfWhite);
    else
        sfRectangleShape_setFillColor(p->li_rect, sfTransparent);
}

void fill_tools2(paint_t *p)
{
    if (p->ispiclick == true)
        sfRectangleShape_setFillColor(p->pi_rect, sfWhite);
    else
        sfRectangleShape_setFillColor(p->pi_rect, sfTransparent);
}

void check_edit(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= 87 && event.x <= 387 && event.y >= 533 && event.y <= 581) {
        if (p->ispenclick == false) {
            p->ispenclick = true; p->iserclick = false; p->issqclick = false;
            p->isciclick = false; p->isliclick = false; p->ispiclick = false;
        } else
            p->ispenclick = false;
    }
    if (event.x >= 87 && event.x <= 387 && event.y >= 615 && event.y <= 663) {
        if (p->iserclick == false) {
            p->iserclick = true; p->ispenclick = false; p->issqclick = false;
            p->isciclick = false; p->isliclick = false; p->ispiclick = false;
        } else
            p->iserclick = false;
    }
}

void check_edit2(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= 87 && event.x <= 387 && event.y >= 698 && event.y <= 745) {
        if (p->issqclick == false) {
            p->issqclick = true; p->iserclick = false; p->ispenclick = false;
            p->isciclick = false; p->isliclick = false; p->ispiclick = false;
        } else
            p->issqclick = false;
    }
    if (event.x >= 87 && event.x <= 387 && event.y >= 779 && event.y <= 827) {
        if (p->isciclick == false) {
            p->isciclick = true; p->ispenclick = false; p->issqclick = false;
            p->iserclick = false; p->isliclick = false; p->ispiclick = false;
        } else
            p->isciclick = false;
    }
}

void check_edit3(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= 87 && event.x <= 387 && event.y >= 861 && event.y <= 909) {
        if (p->isliclick == false) {
            p->isliclick = true; p->iserclick = false; p->ispenclick = false;
            p->isciclick = false; p->issqclick = false; p->ispiclick = false;
        } else
            p->isliclick = false;
    }
    if (event.x >= 87 && event.x <= 387 && event.y >= 942 && event.y <= 991) {
        if (p->ispiclick == false) {
            p->ispiclick = true; p->ispenclick = false; p->issqclick = false;
            p->iserclick = false; p->isliclick = false; p->isciclick = false;
        } else
            p->ispiclick = false;
    }
}
