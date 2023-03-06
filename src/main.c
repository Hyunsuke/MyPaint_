/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** main.c
*/
#include "paint.h"

void start(paint_t *p)
{
    sfRenderWindow *window;
    sfVideoMode mode = {1920, 1080, 64};
    sfEvent event;
    setup_sprites(p);
    window = sfRenderWindow_create(mode, "my_paint", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 144);

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        draw_sprites(window, p);
        sfRenderWindow_display(window);
        while (sfRenderWindow_pollEvent(window, &event) &&
        (p->test = close_one(window, event)) == 0)
            analyse_events(event, p);
    }
    sfRenderWindow_destroy(window);
}

int close_one(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
        return 2;
    }
    return 0;
}

void analyse_events(sfEvent event, paint_t *p)
{
    if (event.type == sfEvtKeyPressed) {
        my_printf("Key pressed\n");
    }
}

int main(int ac, char **av)
{
    (void) av;
    paint_t *paint = malloc(sizeof(paint_t));
        if (paint == NULL) {
            my_eprintf("malloc failed\n");
            return 84;
        }
    if (ac != 1) {
        my_eprintf("usage: ./paint\n");
        exit(84);
    }
    start(paint);
    return 0;
}
