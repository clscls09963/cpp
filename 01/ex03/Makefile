
SRCS	= main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS	= $(SRCS:.cpp=.o)
NAME	= human

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= none
HEADER	= Weapon.hpp HumanA.hpp HumanB.hpp

all:	$(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
