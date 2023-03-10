/*
** EPITECH PROJECT, 2022
** CSFML
** File description:
** sprite.c
*/
#include "paint.h"

void draw_sprites(sfRenderWindow *window, paint_t *p)
{
    sfRenderWindow_drawSprite(window, p->sprite_background, NULL);
    sfRenderWindow_drawSprite(window, p->sprite_notepad, NULL);
    sfRenderWindow_drawRectangleShape(window, p->rectangle_draw, NULL);
    //sfRenderWindow_drawSprite(window, p->sprite_tools, NULL);
    sfRenderWindow_drawRectangleShape(window, p->file_rect, NULL);
    sfRenderWindow_drawText(window, p->file_text, NULL);
    if (p->isfileopen == false) {
        sfRenderWindow_drawRectangleShape(window, p->edition_rect, NULL);
        sfRenderWindow_drawText(window, p->edit_text, NULL);
    }
    if (p->isfileopen == false && p->iseditopen == false) {
        sfRenderWindow_drawRectangleShape(window, p->help_rect, NULL);
        sfRenderWindow_drawText(window, p->help_text, NULL);
    }
    if (p->isfileopen == true) {
        sfRenderWindow_drawRectangleShape(window, p->of_rect, NULL);
        sfRenderWindow_drawRectangleShape(window, p->nf_rect, NULL);
        sfRenderWindow_drawRectangleShape(window, p->sf_rect, NULL);
        sfRenderWindow_drawText(window, p->of_text, NULL);
        sfRenderWindow_drawText(window, p->nf_text, NULL);
        sfRenderWindow_drawText(window, p->sf_text, NULL);
    }
    if (p->iseditopen == true) {
        sfRenderWindow_drawRectangleShape(window, p->pen_rect, NULL);
        sfRenderWindow_drawRectangleShape(window, p->er_rect, NULL);
        sfRenderWindow_drawRectangleShape(window, p->sq_rect, NULL);
        sfRenderWindow_drawRectangleShape(window, p->ci_rect, NULL);
        sfRenderWindow_drawRectangleShape(window, p->li_rect, NULL);
        sfRenderWindow_drawRectangleShape(window, p->pi_rect, NULL);
        sfRenderWindow_drawText(window, p->pen_text, NULL);
        sfRenderWindow_drawText(window, p->er_text, NULL);
        sfRenderWindow_drawText(window, p->sq_text, NULL);
        sfRenderWindow_drawText(window, p->ci_text, NULL);
        sfRenderWindow_drawText(window, p->li_text, NULL);
        sfRenderWindow_drawText(window, p->pi_text, NULL);
    }
    if (p->ishelpopen == true) {
        sfRenderWindow_drawRectangleShape(window, p->about_rect, NULL);
        sfRenderWindow_drawRectangleShape(window, p->he_rect, NULL);
        sfRenderWindow_drawText(window, p->ab_text, NULL);
        sfRenderWindow_drawText(window, p->he_text, NULL);
    }
    if (p->isabclick == true) {
        sfRenderWindow_drawSprite(window, p->about_back, NULL);
        sfRenderWindow_drawText(window, p->about_text, NULL);
        sfRenderWindow_drawText(window, p->log1, NULL);
        sfRenderWindow_drawText(window, p->log2, NULL);
        sfRenderWindow_drawText(window, p->ab_exit, NULL);
    }
    if (p->isheclick == true) {
        sfRenderWindow_drawSprite(window, p->help_back, NULL);
        sfRenderWindow_drawText(window, p->text_he, NULL);
        sfRenderWindow_drawText(window, p->ab_exit, NULL);
    }
}

void setup_sprites(paint_t *p)
{
    p->iseditopen = false; p->isfileopen = false; p->ishelpopen = false;
    sfVector2f pos = {0, 0}; sfVector2f scale = {1, 1};
    p->sprite_background = my_getsprite("assets/background.jpg", pos, scale);
    sfVector2f pos_notepad = {475, 120};
    p->sprite_notepad = my_getsprite("assets/notepad.png", pos_notepad, scale);
    sfVector2f pos_rect = {482, 278}; sfVector2f size_rect = {928, 513};
    p->rectangle_draw = my_getrect(pos_rect, size_rect, sfWhite);
    sfVector2f pos_tools = {1500, 350}; sfVector2f scale_tools = {1, 1};
    p->sprite_tools =
    my_getsprite("assets/tools/all_tools.png", pos_tools, scale_tools);
    sfVector2f pos_ab = {0, 0}; sfVector2f scale_ab = {1, 1};
    p->about_back = my_getsprite("assets/background.jpg", pos_ab, scale_ab);
    sfVector2f pos_ab_text = {810, 41}; int size_ab = 105;
    p->about_text =
    my_gettext("ABOUT", "assets/Baxoe.ttf", pos_ab_text, size_ab);
    sfVector2f pos_l1 = {743, 390}; int size_l1 = 40;
    p->log1 = 
    my_gettext("leo.lepretre@epitech.eu", "assets/Baxoe.ttf", pos_l1, size_l1);
}

void init_menu(paint_t *p)
{
    p->pos_file = (sfVector2f) {64, 271}; p->size_file = (sfVector2f) {350, 75};
    p->file_rect = my_getrect(p->pos_file, p->size_file, sfTransparent);
    p->pos_edit = (sfVector2f) {64, 431}; p->size_edit = (sfVector2f) {350, 75};
    p->edition_rect = my_getrect(p->pos_edit, p->size_edit, sfTransparent);
    p->pos_help = (sfVector2f) {64, 591}; p->size_help = (sfVector2f) {350, 75};
    p->help_rect = my_getrect(p->pos_help, p->size_help, sfTransparent);
    sfVector2f pos_file_text = {83, 270}; int file_size = 60;
    p->file_text =
    my_gettext("FILE", "assets/Baxoe.ttf", pos_file_text, file_size);
    sfVector2f pos_edit_text = {83, 430}; int edit_size = 60;
    p->edit_text =
    my_gettext("EDITION", "assets/Baxoe.ttf", pos_edit_text, edit_size);
    sfVector2f pos_help_text = {83, 590}; int help_size = 60;
    p->help_text =
    my_gettext("HELP", "assets/Baxoe.ttf", pos_help_text, help_size);
    sfVector2f pl2 = {743, 540}; int sl2 = 40;
    p->log2 = 
    my_gettext("henri.gey-bechalier@epitech.eu", "assets/Baxoe.ttf", pl2, sl2);
}

void init_rect(paint_t *p)
{
    sfVector2f of_pos = {87, 374}; sfVector2f of_size = {299, 45};
    p->of_rect = my_getrect(of_pos, of_size, sfTransparent);
    sfVector2f nf_pos = {87, 456}; sfVector2f nf_size = {299, 45};
    p->nf_rect = my_getrect(nf_pos, nf_size, sfTransparent);
    sfVector2f sf_pos = {87, 538}; sfVector2f sf_size = {299, 45};
    p->sf_rect = my_getrect(sf_pos, sf_size, sfTransparent);
    sfVector2f of_text_pos = {100, 372}; int size_of = 35;
    p->of_text =
    my_gettext("Open file", "assets/Baxoe.ttf", of_text_pos, size_of);
    sfVector2f nf_text_pos = {100, 454}; int size_nf = 35;
    p->nf_text =
    my_gettext("New file", "assets/Baxoe.ttf", nf_text_pos, size_nf);
    sfVector2f sf_text_pos = {100, 536}; int size_sf = 35;
    p->sf_text =
    my_gettext("Save file", "assets/Baxoe.ttf", sf_text_pos, size_sf);
    sfVector2f pe = {1650, 897}; int se = 75;
    p->ab_exit = my_gettext("EXIT", "assets/Baxoe.ttf", pe, se);
}

void init_rect_2(paint_t *p)
{
    sfVector2f pen_pos = {87, 533}; sfVector2f pen_size = {299, 45};
    p->pen_rect = my_getrect(pen_pos, pen_size, sfTransparent);
    sfVector2f er_pos = {87, 615}; sfVector2f er_size = {299, 45};
    p->er_rect = my_getrect(er_pos, er_size, sfTransparent);
    sfVector2f sq_pos = {87, 697}; sfVector2f sq_size = {299, 45};
    p->sq_rect = my_getrect(sq_pos, sq_size, sfTransparent);
    sfVector2f ci_pos = {87, 779}; sfVector2f ci_size = {299, 45};
    p->ci_rect = my_getrect(ci_pos, ci_size, sfTransparent);
    sfVector2f li_pos = {87, 861}; sfVector2f li_size = {299, 45};
    p->li_rect = my_getrect(li_pos, li_size, sfTransparent);
    sfVector2f pi_pos = {87, 943}; sfVector2f pi_size = {299, 45};
    p->pi_rect = my_getrect(pi_pos, pi_size, sfTransparent);
}

void init_text_edit(paint_t *p)
{
    sfVector2f pen_text_pos = {100, 534}; int size_pen = 35;
    p->pen_text =
    my_gettext("Pencil", "assets/Baxoe.ttf", pen_text_pos, size_pen);
    sfVector2f er_text_pos = {100, 616}; int size_er = 35;
    p->er_text =
    my_gettext("Eraser", "assets/Baxoe.ttf", er_text_pos, size_er);
    sfVector2f sq_text_pos = {100, 698}; int size_sq = 35;
    p->sq_text =
    my_gettext("Square", "assets/Baxoe.ttf", sq_text_pos, size_sq);
    sfVector2f ci_text_pos = {100, 780}; int size_ci = 35;
    p->ci_text =
    my_gettext("Circle", "assets/Baxoe.ttf", ci_text_pos, size_ci);
    sfVector2f li_text_pos = {100, 862}; int size_li = 35;
    p->li_text =
    my_gettext("Line", "assets/Baxoe.ttf", li_text_pos, size_li);
    sfVector2f pi_text_pos = {100, 944}; int size_pi = 35;
    p->pi_text =
    my_gettext("Pipette", "assets/Baxoe.ttf", pi_text_pos, size_pi);
}

void init_rect3(paint_t *p)
{
    sfVector2f about_pos = {87, 694}; sfVector2f about_size = {299, 45};
    p->about_rect = my_getrect(about_pos, about_size, sfTransparent);
    sfVector2f help_pos = {87, 776}; sfVector2f help_size = {299, 45};
    p->he_rect = my_getrect(help_pos, help_size, sfTransparent);
    sfVector2f ab_text_pos = {100, 694}; int size_ab = 35;
    p->ab_text =
    my_gettext("About", "assets/Baxoe.ttf", ab_text_pos, size_ab);
    sfVector2f he_text_pos = {100, 776}; int size_he = 35;
    p->he_text =
    my_gettext("Help", "assets/Baxoe.ttf", he_text_pos, size_he);
    sfVector2f pos_help_back = {0, 0}; sfVector2f sc_hb = {1, 1};
    p->help_back = my_getsprite("assets/background.jpg", pos_help_back, sc_hb);
    sfVector2f pos_help_text = {860, 41}; int size_h = 105;
    p->text_he =
    my_gettext("HELP", "assets/Baxoe.ttf", pos_help_text, size_h);
    sfVector2f pe = {1650, 897}; int se = 75;
    p->he_exit = my_gettext("EXIT", "assets/Baxoe.ttf", pe, se);
}
