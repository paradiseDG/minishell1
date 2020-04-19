##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## makefile
##

SRC	=	my_getnbr.c				\
		my_putchar.c			\
		my_strlen.c   			\
		my_put_nbr.c			\
		my_strcpy.c				\
		my_putstr.c				\
		my_strcat.c				\
		my_strcut.c

OBJ	=	$(SRC:.c=.o)

NAME    =       libmy.a

CC	=	gcc

RM	=	rm -f

all:    $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all













