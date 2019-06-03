/*
** EPITECH PROJECT, 2019
** cactus
** File description:
** cactus
*/

#include "../include/header.h"

void  	setting_position_cactus_two(struct a *c)
{
    if (c->ennemies >= 3) {
        sfSprite_setPosition(c->sprite12, c->cactus3);
    }
    if (c->ennemies >= 4) {
        sfSprite_setPosition(c->sprite13, c->cactus4);
    }
}

void  	setting_position_cactus_tree(struct a *c)
{
    if (c->ennemies >= 5) {
        sfSprite_setPosition(c->sprite14, c->cactus5);
    }
    if (c->ennemies >= 6) {
        sfSprite_setPosition(c->sprite15, c->cactus6);
    }
}

void  	setting_position_cactus_four(struct a *c)
{
    if (c->ennemies >= 7) {
        sfSprite_setPosition(c->sprite16, c->cactus7);
    }
    if (c->ennemies >= 8) {
        sfSprite_setPosition(c->sprite17, c->cactus8);
    }
}

void  	setting_position_cactus_five(struct a *c)
{
    if (c->ennemies >= 9) {
        sfSprite_setPosition(c->sprite18, c->cactus9);
    }
    if (c->ennemies >= 10) {
        sfSprite_setPosition(c->sprite18, c->cactus10);
    }
}

void    setting_position_cactus(struct a *c)
{
    if (c->ennemies >= 1) {
        sfSprite_setPosition(c->sprite10, c->cactus1);
    }
    if (c->ennemies >= 2) {
        sfSprite_setPosition(c->sprite11, c->cactus2);
    }
    setting_position_cactus_two(c);
    setting_position_cactus_tree(c);
    setting_position_cactus_four(c);
    setting_position_cactus_five(c);
}
