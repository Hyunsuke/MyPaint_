/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** draw.c
*/
#include "paint.h"

void draw_pixels(sfRenderWindow *window, sfEvent event, paint_t *p)
{
    p->mouse_pos_x = sfMouse_getPositionRenderWindow(window).x;
    p->mouse_pos_y = sfMouse_getPositionRenderWindow(window).y;
    float image_x = sfImage_getSize(p->no_image).x;
    float image_y = sfImage_getSize(p->no_image).y;
    float paper_x = 1410 - 482; float paper_y = 791 - 278;
    float coeff_x = image_x / paper_x; float coeff_y = image_y / paper_y;

    if (p->mouse_pos_x >= 482 && p->mouse_pos_x <= 1410) {
        if (p->mouse_pos_y >= 278 && p->mouse_pos_y <= 791) {
        float pos_x = p->mouse_pos_x - 482; float pos_y = p->mouse_pos_y - 278;
            int x = pos_x * coeff_x; int y = pos_y * coeff_y;
            my_printf("%d && %d\n", x, y);
            sfImage_setPixel(p->no_image, x, y, p->color);
            sfTexture_updateFromImage(p->no_image_texture, p->no_image, 0, 0);
            sfRectangleShape_setTexture(p->rectangle_draw, p->no_image_texture,
            sfFalse);
            sfRenderWindow_drawRectangleShape(window, p->rectangle_draw, NULL);
        }
    }
}
