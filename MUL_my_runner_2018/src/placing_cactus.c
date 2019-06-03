/*
** EPITECH PROJECT, 2019
** cactus
** File description:
** cacts
*/

#include "../include/header.h"

void    placing_cactus_two(struct a *c)
{
    if (c->ennemies >= 3) {
        c->cactus3.x = 500 * c->save_ennemies[2][1];
        c->cactus3.y = 68 * c->save_ennemies[2][0];
    }
    else if (c->ennemies >= 4) {
        c->cactus4.x = 500 * c->save_ennemies[3][1];
        c->cactus4.y = 68 * c->save_ennemies[3][0];
    }
}

void    placing_cactus_tree(struct a *c)
{
    if (c->ennemies >= 5) {
        c->cactus5.x = 500 * c->save_ennemies[4][1];
        c->cactus5.y = 68 * c->save_ennemies[4][0];
    }
    else if (c->ennemies >= 6) {
        c->cactus6.x = 500 * c->save_ennemies[5][1];
        c->cactus6.y = 68 * c->save_ennemies[5][0];
    }
}

void    placing_cactus_four(struct a *c)
{
    if (c->ennemies >= 7) {
        c->cactus7.x = 500 * c->save_ennemies[6][1];
        c->cactus7.y = 68 * c->save_ennemies[6][0];
    }
    else if (c->ennemies >= 8) {
        c->cactus8.x = 500 * c->save_ennemies[7][1];
        c->cactus8.y = 68 * c->save_ennemies[7][0];
    }
}

void    placing_cactus_five(struct a *c)
{
    if (c->ennemies >= 9) {
        c->cactus9.x = 500 * c->save_ennemies[8][1];
        c->cactus9.y = 68 * c->save_ennemies[8][0];
    }
    else if (c->ennemies >= 10) {
        c->cactus10.x = 500 * c->save_ennemies[9][1];
        c->cactus10.y = 68 * c->save_ennemies[9][0];
    }
}

void    placing_cactus(struct a *c)
{
    if (c->ennemies >= 1) {
        c->cactus1.x = 500 * c->save_ennemies[0][1];
        c->cactus1.y = 68 * c->save_ennemies[0][0];
    }
    if (c->ennemies >= 2) {
        c->cactus2.x = 500 * c->save_ennemies[1][1];
        c->cactus2.y = 68 * c->save_ennemies[1][0];
    }
    placing_cactus_two(c);
    placing_cactus_tree(c);
    placing_cactus_four(c);
    placing_cactus_five(c);
}
