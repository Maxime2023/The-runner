/*
** EPITECH PROJECT, 2019
** jump
** File description:
** jump
*/

#include "../include/header.h"

void    move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left >= 3630)
        rect->left = 0;
}

void    move_rect_two(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left >= 4536)
        rect->left = 0;
}

void    jumping(struct a *c)
{
    if (c->jumping == 1) {
        if (c->descending <= 15) {
            c->mid.y -= 20;
            c->descending++;
        }
        if (c->descending == 15)
            c->blocking_jump = 1;
    }
    if (c->blocking_jump == 1) {
        if (c->descent <= 15) {
            c->mid.y += 20;
            c->descent++;
        }
        descending(c);
    }
}

void    setting_rect(struct a *c)
{
    c->rect.top = 0;
    c->rect.left = 0;
    c->rect.width = 363;
    c->rect.height = 464;
    c->rect_two.top = 0;
    c->rect_two.left = 0;
    c->rect_two.width = 556;
    c->rect_two.height = 567;
    c->video_mode.width = 1920;
    c->video_mode.height = 1080;
    c->video_mode.bitsPerPixel = 32;
    c->clock = sfClock_create();
    c->clock_two = sfClock_create();
}

void    initializing_vectors(struct a *c)
{
    c->finish_game = 0;
    c->scale_ennemies.x = 0.3;
    c->scale_ennemies.y = 0.3;
    c->descending = 0;
    c->blocking_jump = 0;
    c->descent = 0;
    c->jumping = 0;
    c->lives = 0;
}
