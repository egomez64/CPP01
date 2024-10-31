GXX = c++

CFLAGS = -Wall -Werror -Wextra -g -std=c++98

NAME = sed

SRC = main.cpp \
		Sed.cpp

HEADER = Sed.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(GXX) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(GXX) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: fclean clean all re