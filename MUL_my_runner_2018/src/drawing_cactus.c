/*
** EPITECH PROJECT, 2019
** draw
** File description:
** draw
*/

#include "../include/header.h"

void    draw_cactus_two(struct a *c)
{
    if (c->ennemies >= 3) {
        sfRenderWindow_drawSprite(c->window, c->sprite12, NULL);
        if (c->mid.x == c->cactus3.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
    else if (c->ennemies >= 4) {
        sfRenderWindow_drawSprite(c->window, c->sprite13, NULL);
        if (c->mid.x == c->cactus4.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
}

void    draw_cactus_tree(struct a *c)
{
    if (c->ennemies >= 5) {
        sfRenderWindow_drawSprite(c->window, c->sprite14, NULL);
        if (c->mid.x == c->cactus5.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
    else if (c->ennemies >= 6) {
        sfRenderWindow_drawSprite(c->window, c->sprite15, NULL);
        if (c->mid.x == c->cactus6.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
}

void    draw_cactus_four(struct a *c)
{
    if (c->ennemies >= 7) {
        sfRenderWindow_drawSprite(c->window, c->sprite16, NULL);
        if (c->mid.x == c->cactus7.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
    else if (c->ennemies >= 8) {
        sfRenderWindow_drawSprite(c->window, c->sprite17, NULL);
        if (c->mid.x == c->cactus8.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
}

void    draw_cactus_five(struct a *c)
{
    if (c->ennemies >= 9) {
        sfRenderWindow_drawSprite(c->window, c->sprite18, NULL);
        if (c->mid.x == c->cactus9.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
    else if (c->ennemies >= 10) {
        sfRenderWindow_drawSprite(c->window, c->sprite19, NULL);
        if (c->mid.x == c->cactus9.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
}

void    draw_cactus(struct a *c)
{
    if (c->ennemies >= 1) {
        sfRenderWindow_drawSprite(c->window, c->sprite10, NULL);
        if (c->mid.x == c->cactus1.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
    else if (c->ennemies >= 2) {
        sfRenderWindow_drawSprite(c->window, c->sprite11, NULL);
        if (c->mid.x == c->cactus2.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
    draw_cactus_two(c);
    draw_cactus_tree(c);
    draw_cactus_four(c);
    draw_cactus_five(c);
}
