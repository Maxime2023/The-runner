/*
** EPITECH PROJECT, 2018
** parsing
** File description:
** parsing
*/

#include "../include/header.h"

int    x_lenght(char *buf)
{
    int d = 0;

    while (buf[d] != '\n')
        d++;
    d++;
    return (d);
}

int    y_lenght(char *buf)
{
    int	d = 0;
    int c = 0;

    while (buf[d] != '\0') {
        if (buf[d] == '\n')
            c++;
        d++;
    }
    c++;
    return (c);
}

char    **completing_char_tab(char *buf, struct a *c)
{
    int d = 0;
    int x = 0;
    int y = 0;
    char **tab = malloc(sizeof(char *) * (y_lenght(buf)));

    for (int b = 0; b < y_lenght(buf); b++)
        tab[b] = malloc(sizeof(char) * (x_lenght(buf)));
    for (int d = 0; buf[d] != '\0'; d++) {
        if (buf[d] == '\n') {
            tab[y][x] = '\0';
            y++;
            x = 0;
            d++;
        }
        tab[y][x] = buf[d];
        x++;
    }
    tab[y][x] = '\0';
    return (tab);
}

char    *adding_file(char *a, struct a *c)
{
    int fd;
    char *buf;
    int size;

    buf = malloc(sizeof(char) * (99999));
    fd = open(a, O_RDONLY);
    size = read (fd, buf, 99999);
    buf[size] = '\0';
    x_lenght(buf);
    y_lenght(buf);
    completing_char_tab(buf, c);
    close(fd);
    counting_rocks(buf, c);
    counting_ennemies(buf, c);
    return (buf);
}
