# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/10 10:00:21 by uschmidt          #+#    #+#              #
#    Updated: 2025/07/15 13:19:47 by uschmidt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= interface

SRC_FOLDER	= ./
OBJ_FOLDER	= build/

CFILES		:=
vpath %.cpp $(SRC_FOLDER)
CFILES += main.cpp

vpath %.cpp $(SRC_FOLDER)Ice
CFILES += Ice.cpp

vpath %.cpp $(SRC_FOLDER)Cure
CFILES += Cure.cpp
 
vpath %.cpp $(SRC_FOLDER)AMateria
CFILES += AMateria.cpp

vpath %.cpp $(SRC_FOLDER)MateriaSource
CFILES += MateriaSource.cpp

vpath %.cpp $(SRC_FOLDER)Character
CFILES += Character.cpp

OFILES      = $(addprefix $(OBJ_FOLDER), $(notdir $(CFILES:.cpp=.o)))

CC			= clang++

CFLAGS		= -g -Wall -Wextra -Werror -std=c++98 -Wshadow

all: $(NAME) 

$(NAME): $(OFILES)
	$(CC) $(CFLAGS) -o $(SRC_FOLDER)$(NAME) $(OFILES)

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
