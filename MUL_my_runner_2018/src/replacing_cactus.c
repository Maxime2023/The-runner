/*
** EPITECH PROJECT, 2019
** cactus
** File description:
** cactus
*/

#include "../include/header.h"

void    replacing_cactus_two(struct a *c, char *buf)
{
    if (c->cactus3.x <= -100)
        c->cactus3.x = x_lenght(buf) * 500 + c->save_ennemies[2][1];
    else if (c->cactus4.x <= -100)
        c->cactus4.x = x_lenght(buf) * 500 + c->save_ennemies[3][1];
}

void    replacing_cactus_tree(struct a *c, char *buf)
{
    if (c->cactus5.x <= -100)
        c->cactus5.x = x_lenght(buf) * 500 + c->save_ennemies[4][1];
    else if (c->cactus6.x <= -100)
        c->cactus6.x = x_lenght(buf) * 500 + c->save_ennemies[5][1];
}

void    replacing_cactus_four(struct a *c, char *buf)
{
    if (c->cactus7.x <= -100)
        c->cactus7.x = x_lenght(buf) * 500 + c->save_ennemies[6][1];
    else if (c->cactus8.x <= -100)
        c->cactus8.x = x_lenght(buf) * 500 + c->save_ennemies[7][1];
}

void    replacing_cactus_five(struct a *c, char *buf)
{
    if (c->cactus9.x <= -100)
        c->cactus9.x = x_lenght(buf) * 500 + c->save_ennemies[8][1];
    else if (c->cactus10.x <= -100)
        c->cactus10.x = x_lenght(buf) * 500 + c->save_ennemies[9][1];
}

void    replacing_cactus(struct a *c, char *buf)
{
    if (c->cactus1.x <= -100)
        c->cactus1.x = x_lenght(buf) * 500 + c->save_ennemies[0][1];
    else if (c->cactus2.x <= -100)
        c->cactus2.x = x_lenght(buf) * 500 + c->save_ennemies[1][1];
    replacing_cactus_two(c, buf);
    replacing_cactus_tree(c, buf);
    replacing_cactus_four(c, buf);
    replacing_cactus_five(c, buf);
}
