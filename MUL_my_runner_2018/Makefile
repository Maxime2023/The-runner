##
## EPITECH PROJECT, 2018
## makefile
## File description:
## makefile
##

CC	=	gcc

CFLAGS	=	-l csfml-graphics -l csfml-system -l csfml-window -l csfml-audio \
		-I./include -g3

SRC	=	src/runner.c				\
		src/creating_text_file.c		\
		src/creating_sprite.c			\
		src/setting_texture.c			\
		src/setting_position.c			\
		src/drawing_sprite_and_collision.c	\
		src/paralax.c				\
		src/parsing_map.c			\
		src/rect_and_jump.c			\
		src/set_scale.c				\
		src/replacing_cactus.c			\
		src/replacing_robot.c			\
		src/drawing_cactus.c			\
		src/drawing_robot.c			\
		src/placing_cactus.c			\
		src/placing_robot.c			\
		src/setting_position_cactus.c		\
		src/setting_position_robot.c		\
		src/moving_ennemies.c			\
		src/moving_robot.c			\
		src/counting_ennemies.c			\
		src/other.c				\
		src/start_screen.c			\
		src/my_get_str.c			\
		src/runner_two.c

OBJ	= 	$(SRC:.c=.o)

RM 	=	rm -f

NAME	=	my_runner

all: $(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(SRC) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
