# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/10 12:53:15 by vpopovyc          #+#    #+#              #
#    Updated: 2017/06/23 22:52:46 by vpopovyc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = star_gate

SRC = main.cpp TacticalMarine.cpp AssaultTerminator.cpp Squad.cpp 

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
