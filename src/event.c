/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** event.c
*/
#include "paint.h"

void draw_plw(paint_t *p, sfRenderWindow *window)
{
    sfTexture *texture = sfTexture_createFromFile("assets/plus_w.png", NULL);
    sfTexture *texture1 = sfTexture_createFromFile("assets/plus.png", NULL);
    sfTexture *texture2 = sfTexture_createFromFile("assets/less.png", NULL);
    sfTexture *texture3 = sfTexture_createFromFile("assets/less_w.png", NULL);
    p->mouse = sfMouse_getPositionRenderWindow(window);
    if (p->mouse.x >= 815 && p->mouse.x <= 891) {
        if (p->mouse.y >= 888 && p->mouse.y <= 954)
            sfSprite_setTexture(p->plus, texture, sfFalse);
        else
            sfSprite_setTexture(p->plus, texture1, sfFalse);
    } else
        sfSprite_setTexture(p->plus, texture1, sfFalse);
    if (p->mouse.x >= 973 && p->mouse.x <= 1052) {
        if (p->mouse.y >= 888 && p->mouse.y <= 954)
            sfSprite_setTexture(p->less, texture3, sfFalse);
        else
            sfSprite_setTexture(p->less, texture2, sfFalse);
    } else
        sfSprite_setTexture(p->less, texture2, sfFalse);
}

void update_thickness(sfMouseButtonEvent event, paint_t *p)
{
    if (event.x >= 815 && event.x <= 891 && event.y >= 888 && event.y <= 954) {
        if (p->thickness == 55)
            p->thickness = p->thickness;
        else
            p->thickness = p->thickness + 10;
    }
    if (event.x >= 973 && event.x <= 1052 && event.y >= 888 && event.y <= 954) {
        if (p->thickness == 5)
            p->thickness = p->thickness;
        else
            p->thickness = p->thickness - 10;
    }
}

void analyse_events(sfEvent event, paint_t *p, sfRenderWindow *window)
{
    if (event.type == sfEvtMouseButtonPressed) {
        my_printf("%d %d\n", event.mouseButton.x, event.mouseButton.y);
        manage_mouse_click(event.mouseButton, p);
        update_colors(event, p);
        update_thickness(event.mouseButton, p);
    }
    file_contour(p, window);
    edit_contour(p, window);
    help_contour(p, window);
    mf_contour(p, window); mf_ed_contour(p, window); ed_contour(p, window);
    ed_contour2(p, window); ed_he_contour(p, window); he_contour(p, window);
    exit_color(p, window); draw_plw(p, window);
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

void painting(sfRenderWindow *window, paint_t *p)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        if ((p->ispenclick == true || p->iserclick == true)
        && p->isheclick == false && p->isabclick == false)
            draw_pixels(window, p);
    }
}
