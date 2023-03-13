/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** rectangle_pencil.c
*/
#include "paint.h"

// SQUARE PENCIL
void draw_rectangle_pixels(paint_t *p, float x, float y)
{
    for (p->i = 0; p->i < p->thickness; p->i++) {
        for (p->j = 0; p->j < p->thickness; p->j++) {
            fill_rectangle_pixels(p, x, y);
        }
    }
}

void fill_rectangle_pixels(paint_t *p, float x, float y)
{
    int width = sfImage_getSize(p->no_image).x;
    int height = sfImage_getSize(p->no_image).y;
    if (x + p->i < width && y + p->j < height) {
            sfImage_setPixel(p->no_image, x + p->i, y + p->j, p->color);
        }
        if (x + p->i < width && y + p->j < height) {
            sfImage_setPixel(p->no_image, x + p->i, y + p->j, p->color);
        }

        if (y + p->i < height) {
            sfImage_setPixel(p->no_image, x, y + p->i, p->color);
        }
        if (x - p->i > 0) {
            sfImage_setPixel(p->no_image, x - p->i, y, p->color);
        }
        if (y - p->i > 0) {
            sfImage_setPixel(p->no_image, x, y - p->i, p->color);
        }
}
