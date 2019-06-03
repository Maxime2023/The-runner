/*
** EPITECH PROJECT, 2019
** robot
** File description:
** robot
*/

#include "../include/header.h"

void  	replacing_robot_two(struct a *c, char *buf)
{
    if (c->robot3.x <= -100)
            c->robot3.x = x_lenght(buf) * 500 + c->save_rocks[2][1];
    else if (c->robot4.x <= -100)
        c->robot4.x = x_lenght(buf) * 500 + c->save_rocks[3][1];
}

void  	replacing_robot_tree(struct a *c, char *buf)
{
    if (c->robot5.x <= -100)
        c->robot5.x = x_lenght(buf) * 500 + c->save_rocks[4][1];
    else if (c->robot6.x <= -100)
        c->robot6.x = x_lenght(buf) * 500 + c->save_rocks[5][1];
}

void  	replacing_robot_four(struct a *c, char *buf)
{
    if (c->robot7.x <= -100)
        c->robot7.x = x_lenght(buf) * 500 + c->save_rocks[6][1];
    else if (c->robot8.x <= -100)
        c->robot8.x = x_lenght(buf) * 500 + c->save_rocks[7][1];
}

void  	replacing_robot_five(struct a *c, char *buf)
{
    if (c->robot9.x <= -100)
        c->robot9.x = x_lenght(buf) * 500 + c->save_rocks[8][1];
    else if (c->robot10.x <= -100)
        c->robot10.x = x_lenght(buf) * 500 + c->save_rocks[9][1];
}

void    replacing_robot(struct a *c, char *buf)
{
    if (c->robot1.x <= -100)
        c->robot1.x = x_lenght(buf) * 500 + c->save_rocks[0][1];
    if (c->robot2.x <= -100)
        c->robot2.x = x_lenght(buf) * 500 + c->save_rocks[1][1];
    replacing_robot_two(c, buf);
    replacing_robot_tree(c, buf);
    replacing_robot_four(c, buf);
    replacing_robot_five(c, buf);
}
