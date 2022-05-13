
SRCS	= main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= Polymorphism

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= none
HEADER	= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

all:	$(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
