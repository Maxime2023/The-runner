/*
** EPITECH PROJECT, 2019
** runner
** File description:
** runner
*/

#include "../include/header.h"

void    runner_tree(struct a *c, char *buf)
{
    while (sfRenderWindow_pollEvent(c->window, &c->event)) {
        condition_events(c, buf);
    }
    sfRenderWindow_display(c->window);
    if (c->screen == 1)
        start_screen(c, buf);
    if (c->screen == 3) {
        p_text(c);
        sfRenderWindow_setFramerateLimit(c->window, 60);
        jumping(c);
        second_calling(c, buf);
        p_text(c);
    }
    if (c->screen == 4) {
        starting(c);
    }
    runner_two(c, buf);
}

void    runner_two(struct a *c, char *buf)
{
    if (c->lives == 3) {
        sfRenderWindow_drawSprite(c->window, c->sprite39, NULL);
        c->mid.y = - 2000;
        c->win = 0;
        if (c->event.type == sfEvtMouseButtonPressed) {
            if (c->event.mouseButton.x >= 500 &&
                c->event.mouseButton.x <= 750 &&
                c->event.mouseButton.y >= 700 &&
                c->event.mouseButton.y <= 800)
                sfRenderWindow_close(c->window);
            if (c->event.mouseButton.x >= 1250 &&
                c->event.mouseButton.x <= 1500 &&
                c->event.mouseButton.y >= 700 &&
                c->event.mouseButton.y <= 800) {
                c->screen = 3;
                c->lives = 0;
                c->mid.y = 750;
            }
        }
    }
}
