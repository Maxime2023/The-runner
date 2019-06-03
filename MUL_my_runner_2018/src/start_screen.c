/*
** EPITECH PROJECT, 2019
** start
** File description:
** start
*/

#include "../include/header.h"

void    start_screen_tree(struct a *c, char *buf)
{
    if (c->event.type == sfEvtMouseButtonPressed) {
        if (c->event.mouseButton.x >= 1260 &&
            c->event.mouseButton.x <= 1431 &&
            c->event.mouseButton.y >= 500 &&
            c->event.mouseButton.y <= 546) {
            c->screen = 3;
        }
        if (c->event.mouseButton.x >= 1260 &&
            c->event.mouseButton.x <= 1431 &&
            c->event.mouseButton.y >= 600 &&
            c->event.mouseButton.y <= 646) {
            c->screen = 4;
        }
    }
}

void    start_screen_two(struct a *c, char *buf)
{
    if (c->screen == 1) {
        sfSprite_setPosition(c->sprite33, c->backg);
        sfSprite_setPosition(c->sprite34, c->play);
        sfSprite_setPosition(c->sprite35, c->tutorial);
        sfSprite_setPosition(c->sprite36, c->exit);
        sfSprite_setPosition(c->sprite37, c->map);
        sfSprite_setPosition(c->sprite38, c->endless_mode);
        sfRenderWindow_drawSprite(c->window, c->sprite33, NULL);
        sfRenderWindow_drawSprite(c->window, c->sprite34, NULL);
        sfRenderWindow_drawSprite(c->window, c->sprite35, NULL);
        sfRenderWindow_drawSprite(c->window, c->sprite36, NULL);
        start_screen_tree(c, buf);
    }
}

void    start_screen_one(struct a *c, char *buf)
{
    c->sprite33 = sfSprite_create();
    c->sprite34 = sfSprite_create();
    c->sprite35 = sfSprite_create();
    c->sprite36 = sfSprite_create();
    c->sprite37 = sfSprite_create();
    c->sprite38 = sfSprite_create();
    c->sprite39 = sfSprite_create();
    c->sprite40 = sfSprite_create();
    c->texture33 = sfTexture_createFromFile("./image/start.png", NULL);
    c->texture34 = sfTexture_createFromFile("./image/play.png", NULL);
    c->texture35 = sfTexture_createFromFile("./image/tutorial.png", NULL);
    c->texture36 = sfTexture_createFromFile("./image/exit.png", NULL);
    c->texture37 = sfTexture_createFromFile("./image/map.png", NULL);
    c->texture38 = sfTexture_createFromFile("./image/endless.png", NULL);
    c->texture39 = sfTexture_createFromFile("./image/game_over.png", NULL);
    c->texture40 = sfTexture_createFromFile("./image/tutorial_back.png", NULL);
}

void    start_screen_five(struct a *c, char *buf)
{
    start_screen_one(c, buf);
    sfSprite_setTexture(c->sprite33, c->texture33, sfTrue);
    sfSprite_setTexture(c->sprite34, c->texture34, sfTrue);
    sfSprite_setTexture(c->sprite35, c->texture35, sfTrue);
    sfSprite_setTexture(c->sprite36, c->texture36, sfTrue);
    sfSprite_setTexture(c->sprite37, c->texture37, sfTrue);
    sfSprite_setTexture(c->sprite38, c->texture38, sfTrue);
    sfSprite_setTexture(c->sprite39, c->texture39, sfTrue);
    sfSprite_setTexture(c->sprite40, c->texture40, sfTrue);
    start_screen_two(c, buf);
}

void    start_screen(struct a *c, char *buf)
{
    c->random.x = - 500;
    c->random.y = - 500;
    c->backg.x = 0;
    c->backg.y = 0;
    c->play.x = 1260;
    c->play.y = 500;
    c->tutorial.x = 1260;
    c->tutorial.y = 600;
    c->exit.x = 1260;
    c->exit.y = 700;
    c->map.x = 1260;
    c->map.y = 500;
    c->endless_mode.x = 1260;
    c->endless_mode.y = 600;
    start_screen_five(c, buf);
}
