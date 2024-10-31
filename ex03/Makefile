CC=c++

NAME = violence

SRCS = main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

HEADER = Weapon.hpp \
			HumanA.hpp \
			HumanB.hpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -g --std=c++98

all:$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o : %.cpp $(HEADER)
	$(CC) $(CFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -f $(OBJS)

re: fclean all

.PHONY: all fclean clean re