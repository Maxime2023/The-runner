/*
** EPITECH PROJECT, 2018
** draw
** File description:
** draw
*/

#include "../include/header.h"

void    set_life(struct a *c)
{
    if (c->lives == 0) {
        sfRenderWindow_drawSprite(c->window, c->sprite30, NULL);
        sfRenderWindow_drawSprite(c->window, c->sprite31, NULL);
        sfRenderWindow_drawSprite(c->window, c->sprite32, NULL);
    }
    if (c->lives == 1) {
        sfRenderWindow_drawSprite(c->window, c->sprite30, NULL);
        sfRenderWindow_drawSprite(c->window, c->sprite31, NULL);
    }
    if (c->lives == 2) {
        sfRenderWindow_drawSprite(c->window, c->sprite30, NULL);
    }
}

void    drawing_sprite(struct a *c)
{
    sfRenderWindow_drawSprite(c->window, c->sprite, NULL);
    sfRenderWindow_drawSprite(c->window, c->sprite1, NULL);
    sfRenderWindow_drawSprite(c->window, c->sprite7, NULL);
    sfRenderWindow_drawSprite(c->window, c->sprite8, NULL);
    sfRenderWindow_drawSprite(c->window, c->sprite5, NULL);
    sfRenderWindow_drawSprite(c->window, c->sprite6, NULL);
    sfRenderWindow_drawSprite(c->window, c->sprite3, NULL);
    sfRenderWindow_drawSprite(c->window, c->sprite4, NULL);
    sfRenderWindow_drawSprite(c->window, c->sprite1, NULL);
    sfRenderWindow_drawSprite(c->window, c->sprite2, NULL);
    sfRenderWindow_drawSprite(c->window, c->sprite9, NULL);
    set_life(c);
    draw_cactus(c);
    draw_robot(c);
}
