/*
** EPITECH PROJECT, 2018
** header
** File description:
** header
*/

#include <unistd.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Config.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/System/Vector2.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <time.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <stdio.h>
#include <SFML/Audio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

struct a
{
    sfEvent event;
    sfVideoMode video_mode;
    sfClock *clock;
    sfIntRect rect;
    sfTime time;
    float seconds;
    sfClock *clock_two;
    sfIntRect rect_two;
    sfTime time_two;
    float seconds_two;
    sfTexture* texture;
    sfTexture* texture1;
    sfTexture* texture2;
    sfTexture* texture3;
    sfTexture* texture4;
    sfTexture* texture5;
    sfTexture* texture6;
    sfTexture* texture7;
    sfTexture* texture8;
    sfTexture* texture9;
    sfTexture* texture10;
    sfTexture* texture11;
    sfTexture* texture12;
    sfTexture* texture13;
    sfTexture* texture14;
    sfTexture* texture15;
    sfTexture* texture16;
    sfTexture* texture17;
    sfTexture* texture18;
    sfTexture* texture19;
    sfTexture* texture20;
    sfTexture* texture21;
    sfTexture* texture22;
    sfTexture* texture23;
    sfTexture* texture24;
    sfTexture* texture25;
    sfTexture* texture26;
    sfTexture* texture27;
    sfTexture* texture28;
    sfTexture* texture29;
    sfTexture* texture30;
    sfTexture* texture31;
    sfTexture* texture32;

    sfTexture* texture33;
    sfTexture* texture34;
    sfTexture* texture35;
    sfTexture* texture36;
    sfTexture* texture37;
    sfTexture* texture38;
    sfTexture* texture39;
    sfTexture* texture40;

    sfSprite* sprite;
    sfSprite* sprite1;
    sfSprite* sprite2;
    sfSprite* sprite3;
    sfSprite* sprite4;
    sfSprite* sprite5;
    sfSprite* sprite6;
    sfSprite* sprite7;
    sfSprite* sprite8;
    sfSprite* sprite9;
    sfSprite* sprite10;
    sfSprite* sprite11;
    sfSprite* sprite12;
    sfSprite* sprite13;
    sfSprite* sprite14;
    sfSprite* sprite15;
    sfSprite* sprite16;
    sfSprite* sprite17;
    sfSprite* sprite18;
    sfSprite* sprite19;
    sfSprite* sprite20;
    sfSprite* sprite21;
    sfSprite* sprite22;
    sfSprite* sprite23;
    sfSprite* sprite24;
    sfSprite* sprite25;
    sfSprite* sprite26;
    sfSprite* sprite27;
    sfSprite* sprite28;
    sfSprite* sprite29;
    sfSprite* sprite30;
    sfSprite* sprite31;
    sfSprite* sprite32;

    sfSprite* sprite33;
    sfSprite* sprite34;
    sfSprite* sprite35;
    sfSprite* sprite36;
    sfSprite* sprite37;
    sfSprite* sprite38;
    sfSprite* sprite39;
    sfSprite* sprite40;


    sfVector2f mid;
    sfVector2f ground;
    sfVector2f ground_two;
    sfVector2f spaceship;
    sfVector2f spaceship_two;
    sfVector2f sand;
    sfVector2f sand_two;
    sfVector2f clouds;
    sfVector2f clouds_two;
    sfVector2f lenght;
    sfRenderWindow *window;
    int **save_rocks;
    int **save_ennemies;
    int descending;
    int blocking_jump;
    int descent;
    int jumping;
    sfVector2f cactus1;
    sfVector2f cactus2;
    sfVector2f cactus3;
    sfVector2f cactus4;
    sfVector2f cactus5;
    sfVector2f cactus6;
    sfVector2f cactus7;
    sfVector2f cactus8;
    sfVector2f cactus9;
    sfVector2f cactus10;
    sfVector2f robot1;
    sfVector2f robot2;
    sfVector2f robot3;
    sfVector2f robot4;
    sfVector2f robot5;
    sfVector2f robot6;
    sfVector2f robot7;
    sfVector2f robot8;
    sfVector2f robot9;
    sfVector2f robot10;
    sfVector2f scalling;
    int rocks;
    int ennemies;
    int lives;
    int finish_game;
    sfVector2f scale_ennemies;
    sfVector2f head1;
    sfVector2f head2;
    sfVector2f head3;
    int screen;
    sfVector2f backg;
    sfVector2f play;
    sfVector2f tutorial;
    sfVector2f exit;
    sfVector2f map;
    sfVector2f endless_mode;
    sfVector2f random;
    int win;
    sfText* score;
    sfText* score_nb;
    sfFont* font;
    sfText* text;
    sfMusic *music;
}c;

int    my_putstr(char const *str);
void    creating_text_file(struct a *c);
void    creating_sprite(struct a *c);
void    setting_texture(struct a *c);
void    setting_position(struct a *c);
void    putting_vec(struct a *c, char *buf);
void    drawing_sprite(struct a *c);
void    speed(struct a *c);
void    come_back(struct a *c);
char    *adding_file(char *a, struct a *c);
int    x_lenght(char *str);
void    move_rect(sfIntRect *rect, int offset, int max_value);
void    move_rect_two(sfIntRect *rect, int offset, int max_value);
void    jumping(struct a *c);
void    initializing_vectors(struct a *c);
void    setting_scale(struct a *c);
void    setting_rect(struct a *c);
void    setting_texture_rect(struct a *c);
void    replacing_cactus(struct a *c, char *buf);
void    replacing_robot(struct a *c, char *buf);
void    adding_clock(struct a *c);
void    draw_cactus(struct a *c);
void    draw_robot(struct a *c);
void    placing_cactus(struct a *c);
void    placing_robot(struct a *c);
void    setting_position_cactus(struct a *c);
void    setting_position_robot(struct a *c);
void    moving_ennemies(struct a *c);
void    moving_robot(struct a *c);
int    counting_rocks_two(char *buf, struct a *c);
int    counting_rocks(char *buf, struct a *c);
int    counting_ennemies_two(char *buf, struct a *c);
int    counting_ennemies(char *buf, struct a *c);
int    y_lenght(char *str);
char    **completing_char_tab(char *buf, struct a *c);
void    descending(struct a *c);
void    condition_events(struct a *c, char *buf);
void    first_calling(struct a *c, char *buf);
void    second_calling(struct a *c, char *buf);
void    start_screen(struct a *c, char *buf);
void    p_text(struct a *c);
void    runner_two(struct a *c, char *buf);
void    runner_tree(struct a *c, char *buf);
void    starting(struct a *c);
