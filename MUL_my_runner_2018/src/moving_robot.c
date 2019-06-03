/*
** EPITECH PROJECT, 2019
** robot
** File description:
** robot
*/

#include "../include/header.h"
void  	moving_robot_two(struct a *c)
{
    if (c->rocks >= 3) {
        c->robot3.x -= 10;
    }
    if (c->rocks >= 4) {
        c->robot4.x -= 10;
    }
}

void  	moving_robot_tree(struct a *c)
{
    if (c->rocks >= 5) {
        c->robot5.x -= 10;
    }
    if (c->rocks >= 6) {
        c->robot6.x -= 10;
    }
}

void  	moving_robot_four(struct a *c)
{
    if (c->rocks >= 7) {
        c->robot7.x -= 10;
    }
    if (c->rocks >= 8) {
        c->robot8.x -= 10;
    }
}

void  	moving_robot_five(struct a *c)
{
    if (c->rocks >= 9) {
        c->robot9.x -= 10;
    }
    if (c->rocks >= 10) {
        c->robot10.x -= 10;
    }
}

void    moving_robot(struct a *c)
{
    if (c->rocks >= 1)
        c->robot1.x -= 10;
    if (c->rocks >= 2) {
        c->robot2.x -= 10;
    }
    moving_robot_two(c);
    moving_robot_tree(c);
    moving_robot_four(c);
    moving_robot_five(c);
}
