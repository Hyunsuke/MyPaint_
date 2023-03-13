/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** main.c
*/
#include "paint.h"

void init_all(paint_t *p)
{
    init_text_menu(p); init_rect_menu(p); init_images(p);
    init_text_file(p); init_text_edit(p); init_text_help(p);
    init_rect(p); init_rect_2(p);
    init_rect_3(p);
    help_phrase1(p);
    p->color = sfImage_getPixel(p->all_colors_image, 40, 40);
    p->thickness = 15;
    p->CircleShapeDraw = true;
}

void start(paint_t *p)
{
    sfRenderWindow *window;
    sfVideoMode mode = {1920, 1080, 64};
    sfEvent event;
    setup_sprites(p); init_all(p);
    window = sfRenderWindow_create(mode, "my_paint", sfResize | sfClose, NULL);
    sfRenderWindow_getSize(window);
    sfRenderWindow_setFramerateLimit(window, 144);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        draw_sprites(window, p);
        painting(window, p);
        sfRenderWindow_display(window);
        p->window_x = sfRenderWindow_getSize(window).x;
        p->window_y = sfRenderWindow_getSize(window).y;
        while (sfRenderWindow_pollEvent(window, &event) &&
        (p->test = close_one(window, event)) == 0) {
            analyse_events(event, p, window);
        }
    }
}

int close_one(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
        return 2;
    }
    return 0;
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
        return 84;
    }
    start(paint);
    return 0;
}
