# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/10 12:53:15 by vpopovyc          #+#    #+#              #
#    Updated: 2017/06/10 12:53:18 by vpopovyc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = fixed

SRC = main.cpp Fixed.cpp Expr.cpp
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
