/*
** EPITECH PROJECT, 2022
** my_paint
** File description:
** init_rectangles.c
*/
#include "paint.h"

void init_rect(paint_t *p)
{
    sfVector2f of_pos = {87, 374}; sfVector2f of_size = {299, 45};
    p->of_rect = my_getrect(of_pos, of_size, sfTransparent);
    sfVector2f nf_pos = {87, 456}; sfVector2f nf_size = {299, 45};
    p->nf_rect = my_getrect(nf_pos, nf_size, sfTransparent);
    sfVector2f sf_pos = {87, 538}; sfVector2f sf_size = {299, 45};
    p->sf_rect = my_getrect(sf_pos, sf_size, sfTransparent);
    sfVector2f about_pos = {87, 694}; sfVector2f about_size = {299, 45};
    p->about_rect = my_getrect(about_pos, about_size, sfTransparent);
    sfVector2f help_pos = {87, 776}; sfVector2f help_size = {299, 45};
    p->he_rect = my_getrect(help_pos, help_size, sfTransparent);
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

void init_rect_3(paint_t *p)
{
    sfVector2f tab_color_pos = {1532, 663};
    sfVector2f tab_color_size = {162, 82};
    p->current_color =
    my_getrect(tab_color_pos, tab_color_size, sfBlack);
}

void init_rect_menu(paint_t *p)
{
    p->pos_file = (sfVector2f) {64, 271}; p->size_file = (sfVector2f) {350, 75};
    p->file_rect = my_getrect(p->pos_file, p->size_file, sfTransparent);
    p->pos_edit = (sfVector2f) {64, 431}; p->size_edit = (sfVector2f) {350, 75};
    p->edition_rect = my_getrect(p->pos_edit, p->size_edit, sfTransparent);
    p->pos_help = (sfVector2f) {64, 591}; p->size_help = (sfVector2f) {350, 75};
    p->help_rect = my_getrect(p->pos_help, p->size_help, sfTransparent);
}
