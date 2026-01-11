COMPILER = c++
FLAGS = -Wall -Wextra -Werror #-std=c++98#
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
NAME = brain

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean

.SECONDARY: $(OBJ)
