/*
** EPITECH PROJECT, 2019
** moving
** File description:
** moving
*/

#include "../include/header.h"

void  	moving_ennemies_two(struct a *c)
{
    if (c->ennemies >= 3) {
        c->cactus3.x -= 10;
    }
    if (c->ennemies >= 4) {
        c->cactus4.x -= 10;
    }
}

void  	moving_ennemies_tree(struct a *c)
{
    if (c->ennemies >= 5) {
        c->cactus5.x -= 10;
    }
    if (c->ennemies >= 6) {
        c->cactus6.x -= 10;
    }
}

void  	moving_ennemies_four(struct a *c)
{
    if (c->ennemies >= 7) {
        c->cactus7.x -= 10;
    }
    if (c->ennemies >= 8) {
        c->cactus8.x -= 10;
    }
}

void  	moving_ennemies_five(struct a *c)
{
    if (c->ennemies >= 9) {
        c->cactus9.x -= 10;
    }
    if (c->ennemies >= 10) {
        c->cactus10.x -= 10;
    }
}

void    moving_ennemies(struct a *c)
{
    if (c->ennemies >= 1)
        c->cactus1.x -= 10;
    if (c->ennemies >= 2) {
        c->cactus2.x -= 10;
    }
    moving_ennemies_two(c);
    moving_ennemies_tree(c);
    moving_ennemies_four(c);
    moving_ennemies_five(c);
}
