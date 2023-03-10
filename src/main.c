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
    sfEvent event; init_text_edit(p); init_rect3(p);
    setup_sprites(p); init_menu(p); init_rect(p); init_rect_2(p);
    window = sfRenderWindow_create(mode, "my_paint", sfResize | sfClose, NULL);
    sfRenderWindow_getSize(window);
    sfRenderWindow_setFramerateLimit(window, 144);

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        draw_sprites(window, p);
        sfRenderWindow_display(window);
        p->window_x = sfRenderWindow_getSize(window).x;
        p->window_y = sfRenderWindow_getSize(window).y;
        while (sfRenderWindow_pollEvent(window, &event) &&
        (p->test = close_one(window, event)) == 0)
            analyse_events(event, p, window);
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

void analyse_events(sfEvent event, paint_t *p, sfRenderWindow *window)
{
    if (event.type == sfEvtKeyPressed) {
        my_printf("Key pressed\n");
    }
    if (event.type == sfEvtMouseButtonPressed) {
        my_printf("%d %d\n", event.mouseButton.x, event.mouseButton.y);
        manage_mouse_click(event.mouseButton, p);
    }
    file_contour(p, window);
    edit_contour(p, window);
    help_contour(p, window);
    mf_contour(p, window); mf_ed_contour(p, window); ed_contour(p, window);
    ed_contour2(p, window); ed_he_contour(p, window); he_contour(p, window);
    exit_color(p, window);
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
