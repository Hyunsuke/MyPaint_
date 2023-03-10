/*
** EPITECH PROJECT, 2023
** fill_rect.c
** File description:
** fill_rect
*/
#include "paint.h"

void check_exit(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= 1647 && event.x <= 1777 &&
        event.y >= 919 && event.y <= 974) {
        p->isabclick = false;
        sfRectangleShape_setFillColor(p->about_rect, sfTransparent);
    }
    if (event.x >= 1647 && event.x <= 1777 &&
        event.y >= 919 && event.y <= 974) {
        p->isheclick = false;
        sfRectangleShape_setFillColor(p->he_rect, sfTransparent);
    }
}

void fill_file_rect(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= 64 && event.x <= 416 && event.y >= 273 && event.y <= 349) {
        if (p->isfileopen == false && p->isabclick == false &&
            p->isheclick == false) {
            p->isfileopen = true; p->iseditopen = false; p->ishelpopen = false;
            sfRectangleShape_setFillColor(p->file_rect, sfWhite);
            sfRectangleShape_setFillColor(p->edition_rect, sfTransparent);
            sfRectangleShape_setFillColor(p->help_rect, sfTransparent);
        } else {
            p->isfileopen = false;
            sfRectangleShape_setFillColor(p->file_rect, sfTransparent);
        }
    }
}

void fill_edit_rect(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= 64 && event.x <= 416 && event.y >= 431 && event.y <= 509) {
        if (p->iseditopen == false && p->isabclick == false &&
            p->isheclick == false) {
            p->iseditopen = true; p->isfileopen = false; p->ishelpopen = false;
            sfRectangleShape_setFillColor(p->edition_rect, sfWhite);
            sfRectangleShape_setFillColor(p->file_rect, sfTransparent);
            sfRectangleShape_setFillColor(p->help_rect, sfTransparent);
        } else {
            p->iseditopen = false;
            sfRectangleShape_setFillColor(p->edition_rect, sfTransparent);
        }
    }
}

void fill_help_rect(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= 64 && event.x <= 416 && event.y >= 591 && event.y <= 668) {
        if (p->ishelpopen == false && p->isabclick == false &&
            p->isheclick == false) {
            p->ishelpopen = true; p->iseditopen = false; p->isfileopen = false;
            sfRectangleShape_setFillColor(p->help_rect, sfWhite);
            sfRectangleShape_setFillColor(p->edition_rect, sfTransparent);
            sfRectangleShape_setFillColor(p->file_rect, sfTransparent);
        } else {
            p->ishelpopen = false; p->isabclick = false; p->isheclick = false;
            sfRectangleShape_setFillColor(p->help_rect, sfTransparent);
            sfRectangleShape_setFillColor(p->about_rect, sfTransparent);
            sfRectangleShape_setFillColor(p->he_rect, sfTransparent);
        }
    }
}

void manage_mouse_click(sfMouseButtonEvent event, paint_t *p)
{
    fill_file_rect(event, p);
    if (p->isfileopen == false)
        fill_edit_rect(event, p);
    if (p->isfileopen == false && p->iseditopen == false)
        fill_help_rect(event, p);
    if (p->iseditopen == true) {
        check_edit(event, p); check_edit2(event, p); check_edit3(event, p);
        fill_tools(p); fill_tools2(p);
    }
    if (p->ishelpopen == true) {
        check_help(event, p); fill_about_help(p);
    }
    if (p->isabclick == true || p->isheclick == true) {
        check_exit(event, p);
    }
}
