/*
** EPITECH PROJECT, 2018
** paralax
** File description:
** paralax
*/

#include "../include/header.h"

void    speed(struct a *c)
{
    c->ground.x -= 10;
    c->ground_two.x -= 10;
    c->spaceship.x -= 3;
    c->spaceship_two.x -= 3;
    c->sand.x -= 2;
    c->sand_two.x -= 2;
    c->clouds.x -= 1;
    c->clouds_two.x -= 1;
    moving_ennemies(c);
    moving_robot(c);
}

void    replacing_ground(struct a *c)
{
    if (c->ground_two.x <= -1900)
        c->ground_two.x = 1900;
    else if (c->ground.x <= -1900)
        c->ground.x = 1900;
}

void    replacing_spaceship(struct a *c)
{
    if (c->spaceship_two.x <= -1900)
        c->spaceship_two.x = 1900;
    else if (c->spaceship.x <= -1900)
        c->spaceship.x = 1900;
}

void    replacing_sand(struct a *c)
{
    if (c->sand_two.x <= -1900)
        c->sand_two.x = 1900;
    else if (c->sand.x <= -1900)
        c->sand.x = 1900;
}

void    come_back(struct a *c)
{
    replacing_ground(c);
    replacing_spaceship(c);
    replacing_sand(c);
    if (c->clouds_two.x <= -1900)
        c->clouds_two.x = 1900;
    if (c->clouds.x <= -1900)
        c->clouds.x = 1900;
}
