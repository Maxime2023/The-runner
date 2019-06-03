/*
** EPITECH PROJECT, 2019
** ennemies
** File description:
** ennemies
*/

#include "../include/header.h"

int    counting_rocks_two(char *buf, struct a *c)
{
    int d = 0;
    int e = 0;

    while (buf[d] != '\0') {
        if (buf[d] == '3')
            e++;
        d++;
    }
    c->rocks = e;
    if (e == 0)
        return (0);
    c->save_rocks = malloc(sizeof(int *) * (e));
    for (int b = 0; b < e; b++)
        c->save_rocks[b] = malloc(sizeof(int) * 2);
}

int    counting_rocks(char *buf, struct a *c)
{
    char **tab = completing_char_tab(buf, c);
    int x = 0;
    int a = 0;
    int b = 0;

    counting_rocks_two(buf, c);
    for (int y = 0; y < y_lenght(buf); y++) {
        x = 0;
        for (int x = 0; tab[y][x] != '\0'; x++) {
            if (tab[y][x] == '3') {
                c->save_rocks[a][b] = y;
                b++;
                c->save_rocks[a][b] = x;
                a++;
                b = 0;
            }
        }
    }
}

int    counting_ennemies_two(char *buf, struct a *c)
{
    int d = 0;
    int e = 0;

    while (buf[d] != '\0') {
        if (buf[d] == '2')
            e++;
        d++;
    }
    c->ennemies = e;
    if (e == 0)
        return (0);
    c->save_ennemies = malloc(sizeof(int *) * (e));
    for (int b = 0; b < e; b++)
        c->save_ennemies[b] = malloc(sizeof(int) * 2);
}

int    counting_ennemies(char *buf, struct a *c)
{
    char **tab = completing_char_tab(buf, c);
    int x = 0;
    int y = 0;
    int a = 0;
    int b = 0;

    counting_ennemies_two(buf, c);
    for (int y = 0; y < y_lenght(buf); y++) {
        x = 0;
        for (int x = 0; tab[y][x] != '\0'; x++) {
            if (tab[y][x] == '2') {
                c->save_ennemies[a][b] = y + 1;
                b++;
                c->save_ennemies[a][b] = x + 1;
                a++;
                b = 0;
            }
        }
    }
}
