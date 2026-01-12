COMPILER = c++
FLAGS = -Wall -Wextra -Werror #-std=c++98#
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)
NAME = attack

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
