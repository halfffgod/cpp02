NAME		= fixed
SRC			= main.cpp Fixed.cpp
OBJ			= main.o Fixed.o
CC			= g++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -f
all:		$(NAME)

.cpp.o:
			@$(CC) $(FLAGS) -o $@ -c $<

$(NAME):	$(OBJ)
			@$(CC) $(FLAGS) -o $(NAME) $(OBJ)
			@echo "$(NAME) is compiled!"

clean:
			@$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re