/*
** EPITECH PROJECT, 2019
** str
** File description:
** str
*/

#include "../include/header.h"

int    count_nb(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}

char    *my_revstr(char *str)
{
    int i = 0;
    int a = count_nb(str) - 1;
    char c;

    while (a > i) {
        c = str[a];
        str[a] = str[i];
        str[i] = c;
        a--;
        i++;
    }
    return (str);
}

char    *positive(struct a *c, char *str, int b)
{
    int d = c->win;
    int y = 0;
    int md = 10;
    int div = 1;

    if (c->win > 0) {
        while (y < b) {
            str[y] = ((c->win % md) /div) + 48;
            y++;
            div = div * 10;
            md = md * 10;
        }
        str[y] = '\0';
        my_revstr(str);
    }
    return (str);
}

char    *my_get_str(struct a *c)
{
    int b = 0;
    int d = c->win;
    int y = 0;
    int md = 10;
    int div = 1;
    char *str;

    while (d > 0) {
        d = d / 10;
        b++;
    }
    str = malloc(sizeof(char) * b + 1);
    if (c->win == 0) {
        str[0] = '0';
        str[1] = '\0';
        my_revstr(str);
    }
    positive(c, str, b);
    return (str);
    free(str);
}

void    p_text(struct a *c)
{
    c->score = sfText_create();
    c->score_nb = sfText_create();
    sfText_setString(c->score, "METRES : ");
    sfText_setString(c->score_nb, my_get_str(c));
    c->font = sfFont_createFromFile("./image/text.ttf");
    sfText_setFont(c->score, c->font);
    sfText_setFont(c->score_nb, c->font);
    sfText_setCharacterSize(c->score, 50);
    sfText_setCharacterSize(c->score_nb, 50);
    sfText_setPosition(c->score, (sfVector2f){1350, 50});
    sfText_setPosition(c->score_nb, (sfVector2f){1700, 50});
    sfRenderWindow_drawText(c->window, c->score, NULL);
    sfRenderWindow_drawText(c->window, c->score_nb, NULL);
}
