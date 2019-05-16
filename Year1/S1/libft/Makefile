
NAME = libft.a
FLAGS = -Wall -Werror -Wextra
OBJ = *.o
SRC = *.c
OPTIONS = -c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTIONS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
