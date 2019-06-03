/*
** EPITECH PROJECT, 2018
** setting pos
** File description:
** setting pos
*/

#include "../include/header.h"

void    putting_vec_two(struct a *c, char *buf)
{
    c->sand.x = 0;
    c->sand.y = -50;
    c->sand_two.x = 1910;
    c->sand_two.y = -50;
    c->clouds.x = 0;
    c->clouds.y = -50;
    c->clouds_two.x =  1910;
    c->clouds_two.y = -50;
    c->lenght.x = 0.3;
    c->lenght.y = 0.3;
}

void    putting_vec(struct a *c, char *buf)
{
    placing_cactus(c);
    placing_robot(c);
    c->mid.x = 500;
    c->mid.y = 747;
    c->ground.x = 0;
    c->ground.y = -100;
    c->ground_two.x = 1910;
    c->ground_two.y = -100;
    c->spaceship.x = 0;
    c->spaceship.y = -50;
    c->spaceship_two.x = 1910;
    c->spaceship_two.y = - 50;
    putting_vec_two(c, buf);
}

void    setting_position(struct a *c)
{
    c->head1.x = 50;
    c->head1.y = 50;
    c->head2.x = 150;
    c->head2.y = 50;
    c->head3.x = 250;
    c->head3.y = 50;
    sfSprite_setPosition(c->sprite1, c->ground);
    sfSprite_setPosition(c->sprite2, c->ground_two);
    sfSprite_setPosition(c->sprite3, c->spaceship);
    sfSprite_setPosition(c->sprite4, c->spaceship_two);
    sfSprite_setPosition(c->sprite5, c->sand);
    sfSprite_setPosition(c->sprite6, c->sand_two);
    sfSprite_setPosition(c->sprite7, c->clouds);
    sfSprite_setPosition(c->sprite8, c->clouds_two);
    sfSprite_setPosition(c->sprite9, c->mid);
    sfSprite_setPosition(c->sprite30, c->head1);
    sfSprite_setPosition(c->sprite31, c->head2);
    sfSprite_setPosition(c->sprite32, c->head3);
    setting_position_cactus(c);
    setting_position_robot(c);
}
