SRCS	= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= UnnecessaryViolence
CC		= g++
FLAGS	= -Wall -Wextra -Werror #-std=c++98


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

