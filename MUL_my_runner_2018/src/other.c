/*
** EPITECH PROJECT, 2019
** other
** File description:
** other
*/

#include "../include/header.h"

void    descending(struct a *c)
{
    if (c->descent == 14) {
        c->jumping = 0;
        c->descending = 0;
        c->blocking_jump = 0;
        c->descent = 0;
        c->mid.y = 750;
    }
}

void    condition_events(struct a *c, char *buf)
{
    if (c->event.type == sfEvtClosed)
        sfRenderWindow_close(c->window);
    if (c->event.key.code == sfKeySpace) {
        c->jumping = 1;
    }
    if (c->event.key.code == sfKeyDown)
        c->mid.y += 8;
}

void    first_calling(struct a *c, char *buf)
{
    initializing_vectors(c);
    putting_vec(c, buf);
    creating_text_file(c);
    creating_sprite(c);
    setting_texture(c);
    setting_scale(c);
    setting_rect(c);
}

void    second_calling(struct a *c, char *buf)
{
    adding_clock(c);
    replacing_cactus(c, buf);
    replacing_robot(c, buf);
    speed(c);
    come_back(c);
    setting_position(c);
    setting_texture_rect(c);
    drawing_sprite(c);
}
