# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csellier <csellier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/19 08:28:40 by csellier          #+#    #+#              #
#    Updated: 2017/09/19 08:28:46 by csellier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Colleen.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

NAME = Colleen

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean