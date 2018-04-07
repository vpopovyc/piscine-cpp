# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/10 12:53:15 by vpopovyc          #+#    #+#              #
#    Updated: 2017/06/22 21:19:08 by vpopovyc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = sorcerer

SRC = main.cpp Sorcerer.cpp Victim.cpp Peon.cpp
OBJ = $(SRC:.cpp=.o)

CC = clang++
INC = -I ./
CCFLAGS = -Wall -Wextra -Werror

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CCFLAGS) $(INC) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CC) -g $(CCFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXEC)

re: fclean all

.phony: all clean fclean re
