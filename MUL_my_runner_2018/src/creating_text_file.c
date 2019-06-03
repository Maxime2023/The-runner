/*
** EPITECH PROJECT, 2018
** create text
** File description:
** create text
*/

#include "../include/header.h"

void    creating_text_cactus(struct a *c)
{
    c->texture10 = sfTexture_createFromFile("./image/cactus.png", NULL);
    c->texture11 = sfTexture_createFromFile("./image/cactus.png", NULL);
    c->texture12 = sfTexture_createFromFile("./image/cactus.png", NULL);
    c->texture13 = sfTexture_createFromFile("./image/cactus.png", NULL);
    c->texture14 = sfTexture_createFromFile("./image/cactus.png", NULL);
    c->texture15 = sfTexture_createFromFile("./image/cactus.png", NULL);
    c->texture16 = sfTexture_createFromFile("./image/cactus.png", NULL);
    c->texture17 = sfTexture_createFromFile("./image/cactus.png", NULL);
    c->texture18 = sfTexture_createFromFile("./image/cactus.png", NULL);
    c->texture19 = sfTexture_createFromFile("./image/cactus.png", NULL);
}

void    creating_text_robot(struct a *c)
{
    c->texture20 = sfTexture_createFromFile("./image/robot.png", NULL);
    c->texture21 = sfTexture_createFromFile("./image/robot.png", NULL);
    c->texture22 = sfTexture_createFromFile("./image/robot.png", NULL);
    c->texture23 = sfTexture_createFromFile("./image/robot.png", NULL);
    c->texture24 = sfTexture_createFromFile("./image/robot.png", NULL);
    c->texture25 = sfTexture_createFromFile("./image/robot.png", NULL);
    c->texture26 = sfTexture_createFromFile("./image/robot.png", NULL);
    c->texture27 = sfTexture_createFromFile("./image/robot.png", NULL);
    c->texture28 = sfTexture_createFromFile("./image/robot.png", NULL);
    c->texture29 = sfTexture_createFromFile("./image/robot.png", NULL);
}

void    creating_text_file(struct a *c)
{
    c->texture = sfTexture_createFromFile("./image/back.png", NULL);
    c->texture1 = sfTexture_createFromFile("./image/ground2.png", NULL);
    c->texture2 = sfTexture_createFromFile("./image/ground2.png", NULL);
    c->texture3 = sfTexture_createFromFile("./image/spaceship.png", NULL);
    c->texture4 = sfTexture_createFromFile("./image/spaceship.png", NULL);
    c->texture5 = sfTexture_createFromFile("./image/3.png", NULL);
    c->texture6 = sfTexture_createFromFile("./image/3.png", NULL);
    c->texture7 = sfTexture_createFromFile("./image/2.png", NULL);
    c->texture8 = sfTexture_createFromFile("./image/2.png", NULL);
    c->texture9 = sfTexture_createFromFile("./image/ninja2.png", NULL);
    creating_text_cactus(c);
    creating_text_robot(c);
    c->texture30 = sfTexture_createFromFile("./image/head.png", NULL);
    c->texture31 = sfTexture_createFromFile("./image/head.png", NULL);
    c->texture32 = sfTexture_createFromFile("./image/head.png", NULL);
}
