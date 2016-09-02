# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llima <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/27 22:48:55 by llima             #+#    #+#              #
#    Updated: 2016/08/27 23:24:16 by llima            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = eval.c main.c print.c
all: $(NAME)
$(NAME):
		gcc -Wall -Werror -Wextra $(SRC) -o $(NAME) -Iincludes
clean:
		rm -f eval.o
fclean: clean
		rm -f $(NAME)
re: fclean all
