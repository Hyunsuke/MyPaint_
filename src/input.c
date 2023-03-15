/*
** EPITECH PROJECT, 2022
** PROJECTS
** File description:
** input.c
*/
#include "paint.h"

char *my_getstr(paint_t *p)
{
    p->input_str = NULL;
    size_t size = 0;
    if (getline(&p->input_str, &size, stdin) != -1) {
        return p->input_str;
    } else {
        my_printf("\n");
        p->input_str = "15256";
        return p->input_str;
    }
    return NULL;
}

int check_getstr(paint_t *p)
{
    p->error = 0;
    char *str = malloc(sizeof(char) * 2 + 1);
    if (my_getstr(p) != NULL) {
        str = p->input_str;
    } else {
        p->error = 1;
        return 84;
    }
    return 42;
}
