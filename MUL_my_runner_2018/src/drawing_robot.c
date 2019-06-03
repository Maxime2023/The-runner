/*
** EPITECH PROJECT, 2019
** robot
** File description:
** robot
*/

#include "../include/header.h"

void    draw_robot_two(struct a *c)
{
    if (c->rocks >= 3) {
        sfRenderWindow_drawSprite(c->window, c->sprite22, NULL);
        if (c->mid.x == c->robot3.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
    if (c->rocks >= 4) {
        sfRenderWindow_drawSprite(c->window, c->sprite23, NULL);
        if (c->mid.x == c->robot4.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
}

void    draw_robot_tree(struct a *c)
{
    if (c->rocks >= 5) {
        sfRenderWindow_drawSprite(c->window, c->sprite24, NULL);
        if (c->mid.x == c->robot5.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
    if (c->rocks >= 6) {
        sfRenderWindow_drawSprite(c->window, c->sprite25, NULL);
        if (c->mid.x == c->robot6.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
}

void    draw_robot_four(struct a *c)
{
    if (c->rocks >= 7) {
        sfRenderWindow_drawSprite(c->window, c->sprite26, NULL);
        if (c->mid.x == c->robot7.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
    if (c->rocks >= 8) {
        sfRenderWindow_drawSprite(c->window, c->sprite27, NULL);
        if (c->mid.x == c->robot8.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
}

void    draw_robot_five(struct a *c)
{
    if (c->rocks >= 9) {
        sfRenderWindow_drawSprite(c->window, c->sprite28, NULL);
        if (c->mid.x == c->robot9.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
    if (c->rocks >= 10) {
        sfRenderWindow_drawSprite(c->window, c->sprite28, NULL);
        if (c->mid.x == c->robot10.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
}

void    draw_robot(struct a *c)
{
    if (c->rocks >= 1) {
        sfRenderWindow_drawSprite(c->window, c->sprite20, NULL);
        if (c->mid.x == c->robot1.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
    if (c->rocks >= 2) {
        sfRenderWindow_drawSprite(c->window, c->sprite21, NULL);
        if (c->mid.x == c->robot2.x && c->mid.y >= 650) {
            c->lives++;
        }
    }
    draw_robot_two(c);
    draw_robot_tree(c);
    draw_robot_four(c);
    draw_robot_five(c);
}
