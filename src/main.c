/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** main.c
*/
#include "paint.h"

int main(int ac, char **av)
{
    paint_t *paint = malloc(sizeof(paint_t));
        if (paint == NULL) {
            my_eprintf("malloc failed\n");
            return 84;
        }
    if (ac != 1) {
        my_eprintf("usage: ./paint\n");
        exit(84);
    }
    return 0;
}
