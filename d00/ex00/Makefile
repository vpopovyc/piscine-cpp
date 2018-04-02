# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpopovyc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/10 11:58:57 by vpopovyc          #+#    #+#              #
#    Updated: 2017/06/10 11:58:59 by vpopovyc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = megaphone

SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

CC = clang++
CCFLAGS = -Wall -Wextra -Werror

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CCFLAGS) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CC) $(CCFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(EXEC)

re: fclean all

.phony: all clean fclean re
