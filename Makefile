##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Make binary of pushswap
##

SRC	=	source/operations.c	\
		source/main.c	\
		source/pushswap.c	\
		source/my_getnbr.c	\
		source/my_strlen.c	\
		source/returnswap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

CFLAGS	=	-W -Wall -Wextra -Werror -I include

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

PHONY:	fclean clean all re
