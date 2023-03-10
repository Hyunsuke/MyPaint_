/*
** EPITECH PROJECT, 2023
** paint
** File description:
** paint_h
*/
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System/Clock.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/types.h>
#include <unistd.h>
#include <math.h>
#include "my.h"
#include "printf.h"

#ifndef paint_h
    #define paint_h

typedef struct paint_s {
    sfSprite *sprite_background;
    sfSprite *sprite_notepad;
    sfSprite *sprite_tools;
    sfSprite *about_back;
    sfSprite *help_back;
    sfRectangleShape *rectangle_draw;
    sfRectangleShape *file_rect;
    sfRectangleShape *edition_rect;
    sfRectangleShape *help_rect;
    sfRectangleShape *of_rect;
    sfRectangleShape *nf_rect;
    sfRectangleShape *sf_rect;
    sfRectangleShape *pen_rect;
    sfRectangleShape *er_rect;
    sfRectangleShape *sq_rect;
    sfRectangleShape *ci_rect;
    sfRectangleShape *li_rect;
    sfRectangleShape *pi_rect;
    sfRectangleShape *about_rect;
    sfRectangleShape *he_rect;
    sfText *file_text;
    sfText *edit_text;
    sfText *help_text;
    sfText *of_text;
    sfText *nf_text;
    sfText *sf_text;
    sfText *pen_text;
    sfText *er_text;
    sfText *sq_text;
    sfText *ci_text;
    sfText *li_text;
    sfText *pi_text;
    sfText *ab_text;
    sfText *about_text;
    sfText *log1;
    sfText *log2;
    sfText *he_text;
    sfText *ab_exit;
    sfText *he_exit;
    sfText *text_he;
    short test;
    unsigned int window_x;
    unsigned int window_y;
    bool isfileopen;
    bool ishelpopen;
    bool iseditopen;
    bool ispenclick;
    bool iserclick;
    bool issqclick;
    bool isciclick;
    bool isliclick;
    bool ispiclick;
    bool isabclick;
    bool isheclick;
    sfVector2f pos_file;
    sfVector2f pos_edit;
    sfVector2f pos_help;
    sfVector2f size_file;
    sfVector2f size_edit;
    sfVector2f size_help;
} paint_t;

// Create background texture & sprite.
int create_background(paint_t *p);
// Create notepad texture & sprite.
int create_notepad(paint_t *p);

void draw_sprites(sfRenderWindow *window, paint_t *p);

void analyse_events(sfEvent event, paint_t *p, sfRenderWindow *window);

void setup_sprites(paint_t *p);
void init_menu(paint_t *p);
void init_rect(paint_t *p);
void init_rect_2(paint_t *p);
void init_text_edit(paint_t *p);
void init_rect3(paint_t *p);

int close_one(sfRenderWindow *window, sfEvent event);

sfSprite *my_getsprite(char *filepath, sfVector2f position, sfVector2f scale);
sfRectangleShape *my_getrect(sfVector2f pos, sfVector2f size, sfColor col);
sfText *my_gettext(char *phrase, char *police, sfVector2f pos, int size);
void file_contour(paint_t *p, sfRenderWindow *window);
void edit_contour(paint_t *p, sfRenderWindow *window);
void help_contour(paint_t *p, sfRenderWindow *window);
void manage_mouse_click(sfMouseButtonEvent event, paint_t *p);
void mf_contour(paint_t *p, sfRenderWindow *window);
void mf_ed_contour(paint_t *p, sfRenderWindow *window);
void ed_contour(paint_t *p, sfRenderWindow *window);
void ed_contour2(paint_t *p, sfRenderWindow *window);
void ed_he_contour(paint_t *p, sfRenderWindow *window);
void he_contour(paint_t *p, sfRenderWindow *window);
void fill_tools(paint_t *p);
void fill_tools2(paint_t *p);
void check_edit(sfMouseButtonEvent event, paint_t *p);
void check_edit2(sfMouseButtonEvent event, paint_t *p);
void check_edit3(sfMouseButtonEvent event, paint_t *p);
void check_help(sfMouseButtonEvent event, paint_t *p);
void fill_about_help(paint_t *p);
void exit_color(paint_t *p, sfRenderWindow *window);

#endif /* !paint_h */
