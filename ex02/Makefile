NAME = main
CC = c++
FLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = main.cpp \
	  Animal.cpp \
	  Dog.cpp \
	  WrongAnimal.cpp \
	  WrongCat.cpp \
	  Cat.cpp \
	  Brain.cpp 

OBJ = main.o \
	  Animal.o \
	  Dog.o \
	  WrongAnimal.o \
	  WrongCat.o \
	  Cat.o	\
	  Brain.o

all:$(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean 
	$(RM) $(NAME)

re: clean all

.PHONY:all clean fclean re
