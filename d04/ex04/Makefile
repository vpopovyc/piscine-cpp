# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpopovyc <vpopovyc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/10 12:53:15 by vpopovyc          #+#    #+#              #
#    Updated: 2017/06/26 22:15:18 by vpopovyc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = afk_mining

SRC = main.cpp AsteroBocal.cpp BocalSteroid.cpp DeepCoreMiner.cpp StripMiner.cpp \
		MiningBarge.cpp

OBJ = $(SRC:.cpp=.o)

CC = clang++
INC = -I ./
CCFLAGS = -Wall -Wextra -Werror -fsanitize=address

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
