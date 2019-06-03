/*
** EPITECH PROJECT, 2018
** create sprite
** File description:
** create sprite
*/

#include "../include/header.h"

void    creating_cactus(struct a * c)
{
    c->sprite10 = sfSprite_create();
    c->sprite11 = sfSprite_create();
    c->sprite12 = sfSprite_create();
    c->sprite13 = sfSprite_create();
    c->sprite14 = sfSprite_create();
    c->sprite15 = sfSprite_create();
    c->sprite16 = sfSprite_create();
    c->sprite17 = sfSprite_create();
    c->sprite18 = sfSprite_create();
    c->sprite19 = sfSprite_create();
}

void    creating_robot(struct a *c)
{
    c->sprite20 = sfSprite_create();
    c->sprite21 = sfSprite_create();
    c->sprite22 = sfSprite_create();
    c->sprite23 = sfSprite_create();
    c->sprite24 = sfSprite_create();
    c->sprite25 = sfSprite_create();
    c->sprite26 = sfSprite_create();
    c->sprite27 = sfSprite_create();
    c->sprite28 = sfSprite_create();
    c->sprite29 = sfSprite_create();
}

void    creating_sprite(struct a *c)
{
    c->sprite = sfSprite_create();
    c->sprite1 = sfSprite_create();
    c->sprite2 = sfSprite_create();
    c->sprite3 = sfSprite_create();
    c->sprite4 = sfSprite_create();
    c->sprite5 = sfSprite_create();
    c->sprite6 = sfSprite_create();
    c->sprite7 = sfSprite_create();
    c->sprite8 = sfSprite_create();
    c->sprite9 = sfSprite_create();
    creating_cactus(c);
    creating_robot(c);
    c->sprite30 = sfSprite_create();
    c->sprite31 = sfSprite_create();
    c->sprite32 = sfSprite_create();
}
