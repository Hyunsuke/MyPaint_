/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** event.c
*/
#include "paint.h"

void update_thickness(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= (815 * p->scale_x) && event.x <= (891 * p->scale_x) &&
        event.y >= (888 * p->scale_y) && event.y <= (954 * p->scale_y)) {
        if (p->thickness == 55)
            p->thickness = p->thickness;
        else
            p->thickness = p->thickness + 10;
    }
    if (event.x >= (973 * p->scale_x) && event.x <= (1052 * p->scale_x) &&
        event.y >= (888 * p->scale_y) && event.y <= (954 * p->scale_y)) {
        if (p->thickness == 5)
            p->thickness = p->thickness;
        else
            p->thickness = p->thickness - 10;
    }
}

void analyse_events(sfEvent event, paint_t *p, sfRenderWindow *window)
{
    if (event.type == sfEvtMouseButtonPressed) {
        manage_mouse_click(event.mouseButton, p, window);
        update_colors(event, p);
        update_thickness(event.mouseButton, p);
    }
    file_contour(p, window);
    edit_contour(p, window);
    help_contour(p, window);
    mf_contour(p, window); mf_ed_contour(p, window); ed_contour(p, window);
    ed_contour2(p, window); ed_he_contour(p, window); he_contour(p, window);
    exit_color(p, window); rect_and_circle_contour1(p, window);
    rect_and_circle_contour2(p, window);
}

void manage_mouse_click(sfMouseButtonEvent event, paint_t *p,
                        sfRenderWindow *window)
{
    fill_file_rect(event, p);
    if (p->isfileopen == true) {
        new_file(event, p, window); save_file(event, p); open_file(event, p);
    }
    if (p->isfileopen == false)
        fill_edit_rect(event, p);
    if (p->isfileopen == false && p->iseditopen == false)
        fill_help_rect(event, p);
    if (p->iseditopen == true) {
        check_edit(event, p); check_edit2(event, p); check_edit3(event, p);
        fill_tools(p); fill_tools2(p); check_circle(event, p);
    }
    if (p->ishelpopen == true) {
        check_help(event, p); fill_about_help(p);
    }
    if (p->isabclick == true || p->isheclick == true) {
        check_exit(event, p);
    }
}

void painting(sfRenderWindow *window, paint_t *p)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if ((p->ispenclick == true || p->iserclick == true)
        && p->isheclick == false && p->isabclick == false)
            draw_pixels(window, p);
    }
}
