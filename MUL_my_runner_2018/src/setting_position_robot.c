/*
** EPITECH PROJECT, 2019
** robot
** File description:
** robot
*/

#include "../include/header.h"

void  	setting_position_robot_two(struct a *c)
{
    if (c->rocks >= 3) {
        sfSprite_setPosition(c->sprite22, c->robot3);
    }
    if (c->rocks >= 4) {
        sfSprite_setPosition(c->sprite23, c->robot4);
    }
}

void  	setting_position_robot_tree(struct a *c)
{
    if (c->rocks >= 5) {
        sfSprite_setPosition(c->sprite24, c->robot5);
    }
    if (c->rocks >= 6) {
        sfSprite_setPosition(c->sprite25, c->robot6);
    }
}

void  	setting_position_robot_four(struct a *c)
{
    if (c->rocks >= 7) {
        sfSprite_setPosition(c->sprite26, c->robot7);
    }
    if (c->rocks >= 8) {
        sfSprite_setPosition(c->sprite27, c->robot9);
    }
}

void  	setting_position_robot_five(struct a *c)
{
    if (c->rocks >= 9) {
        sfSprite_setPosition(c->sprite28, c->robot10);
    }
    if (c->rocks >= 10) {
        sfSprite_setPosition(c->sprite29, c->robot10);
    }

}
void    setting_position_robot(struct a *c)
{
    if (c->rocks >= 1) {
        sfSprite_setPosition(c->sprite20, c->robot1);
    }
    if (c->rocks >= 2) {
        sfSprite_setPosition(c->sprite21, c->robot2);
    }
    setting_position_robot_two(c);
    setting_position_robot_tree(c);
    setting_position_robot_four(c);
    setting_position_robot_five(c);
}
