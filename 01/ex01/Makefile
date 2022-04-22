
SRCS	= main.cpp zombieHorde.cpp Zombie.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= zombie

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= none
HEADER	= Zombie.hpp

all:	$(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
