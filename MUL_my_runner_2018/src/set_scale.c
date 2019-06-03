/*
** EPITECH PROJECT, 2019
** scale
** File description:
** scale
*/

#include "../include/header.h"

void    setting_scale_two(struct a *c)
{
    sfSprite_setScale(c->sprite20, c->scale_ennemies);
    sfSprite_setScale(c->sprite21, c->scale_ennemies);
    sfSprite_setScale(c->sprite22, c->scale_ennemies);
    sfSprite_setScale(c->sprite23, c->scale_ennemies);
    sfSprite_setScale(c->sprite24, c->scale_ennemies);
    sfSprite_setScale(c->sprite25, c->scale_ennemies);
    sfSprite_setScale(c->sprite26, c->scale_ennemies);
    sfSprite_setScale(c->sprite27, c->scale_ennemies);
    sfSprite_setScale(c->sprite28, c->scale_ennemies);
    sfSprite_setScale(c->sprite29, c->scale_ennemies);
}

void    setting_scale(struct a *c)
{
    sfSprite_setScale(c->sprite9, c->lenght);
    sfSprite_setScale(c->sprite10, c->scale_ennemies);
    sfSprite_setScale(c->sprite11, c->scale_ennemies);
    sfSprite_setScale(c->sprite12, c->scale_ennemies);
    sfSprite_setScale(c->sprite13, c->scale_ennemies);
    sfSprite_setScale(c->sprite14, c->scale_ennemies);
    sfSprite_setScale(c->sprite15, c->scale_ennemies);
    sfSprite_setScale(c->sprite16, c->scale_ennemies);
    sfSprite_setScale(c->sprite17, c->scale_ennemies);
    sfSprite_setScale(c->sprite18, c->scale_ennemies);
    sfSprite_setScale(c->sprite19, c->scale_ennemies);
    setting_scale_two(c);
    sfSprite_setScale(c->sprite30, c->scale_ennemies);
    sfSprite_setScale(c->sprite31, c->scale_ennemies);
    sfSprite_setScale(c->sprite32, c->scale_ennemies);
}
