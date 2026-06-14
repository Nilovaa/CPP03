NAME = DiamondTrap

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow

SRCS = main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp

OBJS = ${SRCS:.cpp=.o}

all: $(NAME)

$(NAME): $(OBJS)
		$(CPP) $(FLAGS) $(OBJS) -o $@

%.o: %.cpp
		$(CPP) $(FLAGS) -c $< -o $@

clean:
		rm -rf $(OBJS)

fclean: clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re