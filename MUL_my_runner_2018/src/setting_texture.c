/*
** EPITECH PROJECT, 2018
** set text
** File description:
** set text
*/

#include "../include/header.h"

void    setting_texture_cactus(struct a *c)
{
    sfSprite_setTexture(c->sprite10, c->texture10, sfTrue);
    sfSprite_setTexture(c->sprite11, c->texture11, sfTrue);
    sfSprite_setTexture(c->sprite12, c->texture12, sfTrue);
    sfSprite_setTexture(c->sprite13, c->texture13, sfTrue);
    sfSprite_setTexture(c->sprite14, c->texture14, sfTrue);
    sfSprite_setTexture(c->sprite15, c->texture15, sfTrue);
    sfSprite_setTexture(c->sprite16, c->texture16, sfTrue);
    sfSprite_setTexture(c->sprite17, c->texture17, sfTrue);
    sfSprite_setTexture(c->sprite18, c->texture18, sfTrue);
    sfSprite_setTexture(c->sprite19, c->texture19, sfTrue);
}

void  	setting_texture_robot(struct a *c)
{
    sfSprite_setTexture(c->sprite20, c->texture20, sfTrue);
    sfSprite_setTexture(c->sprite21, c->texture21, sfTrue);
    sfSprite_setTexture(c->sprite22, c->texture22, sfTrue);
    sfSprite_setTexture(c->sprite23, c->texture23, sfTrue);
    sfSprite_setTexture(c->sprite24, c->texture24, sfTrue);
    sfSprite_setTexture(c->sprite25, c->texture25, sfTrue);
    sfSprite_setTexture(c->sprite26, c->texture26, sfTrue);
    sfSprite_setTexture(c->sprite27, c->texture27, sfTrue);
    sfSprite_setTexture(c->sprite28, c->texture28, sfTrue);
    sfSprite_setTexture(c->sprite29, c->texture29, sfTrue);
}

void    setting_texture(struct a *c)
{
    sfSprite_setTexture(c->sprite, c->texture, sfTrue);
    sfSprite_setTexture(c->sprite1, c->texture1, sfTrue);
    sfSprite_setTexture(c->sprite2, c->texture2, sfTrue);
    sfSprite_setTexture(c->sprite3, c->texture3, sfTrue);
    sfSprite_setTexture(c->sprite4, c->texture4, sfTrue);
    sfSprite_setTexture(c->sprite5, c->texture5, sfTrue);
    sfSprite_setTexture(c->sprite6, c->texture6, sfTrue);
    sfSprite_setTexture(c->sprite7, c->texture7, sfTrue);
    sfSprite_setTexture(c->sprite8, c->texture8, sfTrue);
    sfSprite_setTexture(c->sprite9, c->texture9, sfTrue);
    setting_texture_cactus(c);
    setting_texture_robot(c);
    sfSprite_setTexture(c->sprite30, c->texture30, sfTrue);
    sfSprite_setTexture(c->sprite31, c->texture31, sfTrue);
    sfSprite_setTexture(c->sprite32, c->texture32, sfTrue);
}

void    setting_texture_rect(struct a *c)
{
    sfSprite_setTextureRect(c->sprite9, c->rect);
    sfSprite_setTextureRect(c->sprite20, c->rect_two);
    sfSprite_setTextureRect(c->sprite21, c->rect_two);
    sfSprite_setTextureRect(c->sprite22, c->rect_two);
    sfSprite_setTextureRect(c->sprite23, c->rect_two);
    sfSprite_setTextureRect(c->sprite24, c->rect_two);
    sfSprite_setTextureRect(c->sprite25, c->rect_two);
    sfSprite_setTextureRect(c->sprite26, c->rect_two);
    sfSprite_setTextureRect(c->sprite27, c->rect_two);
    sfSprite_setTextureRect(c->sprite28, c->rect_two);
    sfSprite_setTextureRect(c->sprite29, c->rect_two);
}
