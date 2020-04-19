##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	src/minishell.c

OBJ	=	$(SRC:.c=.o)

NAME	=	mysh

CC	=	gcc

CFLAGS	=	-W -Wall -Wextra

RM	=	rm -f

$(NAME): make_lib $(OBJ)
	$(CC) -o $(NAME) $(OBJ) -L./lib/my -lmy

ifeq ($(debug), 1)
		CFLAGS += -g
endif

all:	$(NAME)

make_lib:
	make -C lib/my

clean:
	make -C lib/my clean
	$(RM) $(OBJ)

fclean: clean
	make -C lib/my fclean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
