##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## gcc
##

SRC	=	src/main.c	\
		src/sprite.c	\
		src/create_assets/create_workplan.c	\

NAME	=	my_paint

OBJ	=	$(SRC:.c=.o)

LIB =	lib/my/libmy.a

LDLIBS = -lmy -lcsfml-graphics

LFLAGS = -L lib/my -l csfml-window -l csfml-system -l csfml-audio

CFLAGS =	-W -Wall -Wextra -g -lncurses -Iinclude

VALGRIND =	-ggdb3

all:	$(LIB) $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(LDLIBS) $(LFLAGS) $(LFLAGS) $(CFLAGS) -lm

debug:	$(LIB)
	gcc -o $(NAME) $(SRC) $(LDLIBS) $(LFLAGS) $(CFLAGS) $(VALGRIND) -g

$(LIB):
	$(MAKE) -C lib/my/

clean:
	$(MAKE) -C lib/my/ clean
	rm -rf $(OBJ)

fclean:     clean
	$(MAKE) -C lib/my fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
