SRCS	= Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp Intern.cpp \
			RobotomyRequestForm.cpp ShrubberyCreationForm.cpp main.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= Ex03
HEADERS = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp Intern.hpp \
			RobotomyRequestForm.hpp ShrubberyCreationForm.hpp 
CC		= clang++
FLAGS	= -Wall -Wextra -Werror #-std=c++98


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

