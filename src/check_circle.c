/*
** EPITECH PROJECT, 2023
** check_circle.c
** File description:
** check_circle
*/
#include "paint.h"

void check_circle(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= 404 && event.x <= 449 && event.y >= 533 && event.y <= 578) {
        if (p->CircleShapeDraw == true)
            p->CircleShapeDraw = false;
        else
            p->CircleShapeDraw = true;
    }
    if (event.x >= 404 && event.x <= 449 && event.y >= 615 && event.y <= 660) {
        if (p->CircleShapeDraw == true)
            p->CircleShapeDraw = false;
        else
            p->CircleShapeDraw = true;
    }
}
