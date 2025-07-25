# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/10 10:00:21 by uschmidt          #+#    #+#              #
#    Updated: 2025/07/10 10:01:54 by uschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= animals

SRC_FOLDER	= ./
OBJ_FOLDER	= build/

CFILES		:=
vpath %.cpp $(SRC_FOLDER)
CFILES += main.cpp

vpath %.cpp $(SRC_FOLDER)Animal
CFILES += Animal.cpp

vpath %.cpp $(SRC_FOLDER)Cat
CFILES += Cat.cpp

vpath %.cpp $(SRC_FOLDER)WrongAnimal
CFILES += WrongAnimal.cpp

vpath %.cpp $(SRC_FOLDER)WrongCat
CFILES += WrongCat.cpp

vpath %.cpp $(SRC_FOLDER)Dog
CFILES += Dog.cpp

OFILES      = $(addprefix $(OBJ_FOLDER), $(notdir $(CFILES:.cpp=.o)))

CC			= c++

CFLAGS		= -g -Wall -Wextra -Werror -std=c++98 -Wshadow

VALGRIND		= valgrind --leak-check=full --track-origins=yes ./$(NAME)

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) -o $(SRC_FOLDER)$(NAME) $(OFILES)

grind: $(OFILES)
	$(CC) $(CFLAGS) -o $(SRC_FOLDER)$(NAME) $(OFILES)
	$(VALGRIND) 

$(OBJ_FOLDER)%.o: %.cpp $(DEPS)
	mkdir -p $(OBJ_FOLDER)
	$(CC) $(CFLAGS) -g -c $< -o $@

clean:
	rm -f $(OFILES)
	find $(SRC_FOLDER) -name "*.o" -delete

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
