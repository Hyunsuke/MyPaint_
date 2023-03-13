/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** colors.c
*/
#include "paint.h"
#include "SFML/Graphics.h"

void update_colors(sfEvent event, paint_t *p)
{
    if (event.mouseButton.x >= 1534 && event.mouseButton.x <= 1695) {
        if (event.mouseButton.y >= 288 && event.mouseButton.y <= 645) {
            check_line_color(event, p);
        }
    }
}

void check_line_color(sfEvent event, paint_t *p)
{
    if (event.mouseButton.y >= 288 && event.mouseButton.y <= 329) {
        check_first_line_color(event, p);
    }
    if (event.mouseButton.y >= 349 && event.mouseButton.y <= 392) {
        check_second_line_color(event, p);
    }
    if (event.mouseButton.y >= 412 && event.mouseButton.y <= 456) {
        check_third_line_color(event, p);
    }
    if (event.mouseButton.y >= 476 && event.mouseButton.y <= 519) {
        check_fourth_line_color(event, p);
    }
    if (event.mouseButton.y >= 540 && event.mouseButton.y <= 583) {
        check_fifth_line_color(event, p);
    }
    if (event.mouseButton.y >= 602 && event.mouseButton.y <= 643) {
        check_sixth_line_color(event, p);
    }
}

void check_first_line_color(sfEvent event, paint_t *p)
{
    if (event.mouseButton.x >= 1534 && event.mouseButton.x <= 1577) {
        p->color = sfImage_getPixel(p->all_colors_image, 40, 40);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= 1593 && event.mouseButton.x <= 1636) {
        p->color = sfImage_getPixel(p->all_colors_image, 90, 40);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
    if (event.mouseButton.x >= 1652 && event.mouseButton.x <= 1695) {
        p->color = sfImage_getPixel(p->all_colors_image, 135, 40);
        sfRectangleShape_setFillColor(p->current_color, p->color);
    }
}
