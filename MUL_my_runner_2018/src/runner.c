/*
** EPITECH PROJECT, 2018
** main
** File description:
** Task01
*/

#include "../include/header.h"

void    starting(struct a *c)
{
    sfRenderWindow_drawSprite(c->window, c->sprite40, NULL);
    if (c->event.type == sfEvtMouseButtonPressed) {
        if (c->event.mouseButton.x >= 1240 &&
            c->event.mouseButton.x <= 1500 &&
            c->event.mouseButton.y >= 825 &&
            c->event.mouseButton.y <= 871) {
            sfRenderWindow_close(c->window);
        }
        if (c->event.mouseButton.x >= 1600 &&
            c->event.mouseButton.x <= 1950 &&
            c->event.mouseButton.y >= 825 &&
            c->event.mouseButton.y <= 871) {
            c->screen = 3;
        }
    }
}

void    adding_clock(struct a *c)
{
    c->time = sfClock_getElapsedTime(c->clock);
    c->seconds = c->time.microseconds / 50000.0;
    if (c->seconds > 1.0) {
        move_rect(&c->rect, 363, 3630);
        sfClock_restart(c->clock);
    }
    c->time_two = sfClock_getElapsedTime(c->clock_two);
    c->seconds_two = c->time_two.microseconds / 5550.0;
    if (c->seconds_two > 1.0) {
        move_rect_two(&c->rect_two, 567, 4536);
        sfClock_restart(c->clock_two);
    }
}

int    runner(struct a *c, char *buf)
{
    c->music = sfMusic_createFromFile("./image/song.ogg");
    sfMusic_play(c->music);
    c->screen = 1;
    c->win = 0;
    first_calling(c, buf);
    c->window = sfRenderWindow_create(c->video_mode,
    "MyWindow", sfDefaultStyle, NULL);
    while (sfRenderWindow_isOpen(c->window)) {
        c->win++;
        runner_tree(c, buf);
    }
    return (0);
}

int    main(int ac, char **argv)
{
    char *buf;
    struct a *c = malloc(sizeof(struct a));

    if (ac != 2)
        return (84);
    buf = adding_file(argv[1], c);
    runner(c, buf);
    return (0);
}
