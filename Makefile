##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	main.c \
		src/create_list.c \
		src/check_sorting.c \
		src/actions/pb_action.c \
		src/actions/pa_action.c \
		src/actions/ra_action.c \
		src/algo.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

CC	=	gcc

LDFLAGS	=	-lmy -L ./lib/my/ -lncurses

CFLAGS	=	-W -Wall -Wextra -Werror

CPPFLAGS	=	-I ./include

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my/
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	make -C lib/my/ clean
	rm -f $(OBJ)
	rm -f *~

fclean:	clean
	make -C lib/my/ fclean
	rm -f $(NAME)

re:	fclean	all
