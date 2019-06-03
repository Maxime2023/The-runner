/*
** EPITECH PROJECT, 2019
** robot
** File description:
** robot
*/

#include "../include/header.h"

void    placing_robot_two(struct a *c)
{
    if (c->rocks >= 3) {
        c->robot3.x = 500 * c->save_rocks[2][1];
        c->robot3.y = 73 * c->save_rocks[2][0];
    }
    if (c->rocks >= 4) {
        c->robot4.x = 500 * c->save_rocks[3][1];
        c->robot4.y = 73 * c->save_rocks[3][0];
    }
}

void    placing_robot_tree(struct a *c)
{
    if (c->rocks >= 5) {
        c->robot5.x = 500 * c->save_rocks[4][1];
        c->robot5.y = 73 * c->save_rocks[4][0];
    }
    if (c->rocks >= 6) {
        c->robot6.x = 500 * c->save_rocks[5][1];
        c->robot6.y = 73 * c->save_rocks[5][0];
    }
}

void    placing_robot_four(struct a *c)
{
    if (c->rocks >= 7) {
        c->robot7.x = 500 * c->save_rocks[6][1];
        c->robot7.y = 73 * c->save_rocks[6][0];
    }
    if (c->rocks >= 8) {
        c->robot8.x = 500 * c->save_rocks[7][1];
        c->robot8.y = 73 * c->save_rocks[7][0];
    }
}

void    placing_robot_five(struct a *c)
{
    if (c->rocks >= 9) {
        c->robot9.x = 500 * c->save_rocks[8][1];
        c->robot9.y = 73 * c->save_rocks[8][0];
    }
    if (c->rocks >= 10) {
        c->robot10.x = 500 * c->save_rocks[9][1];
        c->robot10.y = 73 * c->save_rocks[9][0];
    }
}

void    placing_robot(struct a *c)
{
    if (c->rocks >= 1) {
        c->robot1.x = 500 * c->save_rocks[0][1];
        c->robot1.y = 73 * c->save_rocks[0][0];
    }
    if (c->rocks >= 2) {
        c->robot2.x = 500 * c->save_rocks[1][1];
        c->robot2.y = 73 * c->save_rocks[1][0];
    }
    placing_robot_two(c);
    placing_robot_tree(c);
    placing_robot_four(c);
    placing_robot_five(c);
}
