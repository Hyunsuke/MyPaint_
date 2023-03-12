/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** event.c
*/
#include "paint.h"

void analyse_events(sfEvent event, paint_t *p, sfRenderWindow *window)
{
    if (event.type == sfEvtMouseButtonPressed) {
        my_printf("%d %d\n", event.mouseButton.x, event.mouseButton.y);
        manage_mouse_click(event.mouseButton, p);
        update_colors(event, p);
    }
    file_contour(p, window);
    edit_contour(p, window);
    help_contour(p, window);
    mf_contour(p, window); mf_ed_contour(p, window); ed_contour(p, window);
    ed_contour2(p, window); ed_he_contour(p, window); he_contour(p, window);
    exit_color(p, window);
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
