# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/02 21:23:18 by Zexi Wang         #+#    #+#              #
#    Updated: 2019/02/09 17:18:20 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = typing_robot
CC = gcc
#CFLAGS = -Wall -Wextra -Werror

SRCS = srcs/typing_robot.c srcs/interface.c \
		srcs/string_mode/string_mode.c srcs/string_mode/str_report.c \
		srcs/string_mode/str_generate.c
INCS = -I incs/ -I libs/libft/incs
LIBS = libs/libft/libft.a

all: $(NAME)

$(NAME):
	@$(CC) -o $(NAME) $(CFLAGS) $(SRCS) $(LIBS) $(INCS)

fclean:
	@rm -rf $(NAME)

re: fclean all
