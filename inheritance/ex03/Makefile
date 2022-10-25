SRCS	= ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= Ex03
CC		= clang++
FLAGS	= -Wall -Wextra -Werror #-Wshadow -std=c++98


all:	$(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $<  -o $(<:.cpp=.o)

.PHONY:	all clean fclean re

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

