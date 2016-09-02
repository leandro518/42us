# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llima <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/25 14:53:34 by llima             #+#    #+#              #
#    Updated: 2016/08/25 14:53:35 by llima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat

SRC = main.c ft_cat.c ft_putstr.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -o $(NAME) main.o ft_cat.o ft_putstr.o

clean:
	/bin/rm -f main.o ft_cat.o ft_putstr.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
