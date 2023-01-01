NAME = Animals

COMP = c++
C_FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Cat.cpp WrongCat.cpp Dog.cpp Animal.cpp WrongAnimal.cpp
OBJS = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(COMP) $(C_FLAGS) $^ -o $(NAME)
	@echo "compiled:)"

%.o: %.cpp
	@$(COMP) -c $(CFLAGS) -o $@ $<

clean:
	@$(RM) *.o

fclean: clean
	@$(RM) $(NAME)
	@echo "deleted:("

re: fclean all

.PHONY: all clean fclean re