SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= Ex00
HEADERS = whatever.hpp
CC		= clang++
FLAGS	= -Wall -Wextra -Werror №-std=c++98


all:	$(NAME)

%.o: %.cpp $(HEADERS) Makefile
	$(CC) $(FLAGS) -c $<  -o $(<:.cpp=.o)

.PHONY:	all clean fclean re

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

