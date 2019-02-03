# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/02 21:23:18 by Zexi Wang         #+#    #+#              #
#    Updated: 2019/02/02 21:36:52 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = typing_robot
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/generate.c
INCS = -I incs/ -I libs/libft_incs
LIBS = libs/libft.a

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(CFLAGS) $(SRCS) $(LIBS) $(INCS)

fclean:
	rm -rf $(NAME)

re: fclean all
