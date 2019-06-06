# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/02 21:23:18 by Zexi Wang         #+#    #+#              #
#    Updated: 2019/06/05 17:46:04 by Zexi Wang        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = tybot
CC = gcc
#CFLAGS = -Wall -Wextra -Werror

STR = str_mode.c str_generate.c str_report.c
SENTEN = senten_mode.c

STR_DIR = srcs/str/
SENTEN_DIR = srcs/senten/

SRCS = srcs/tybot.c \
	   $(addprefix $(STR_DIR), $(STR)) \
	   $(addprefix $(SENTEN_DIR), $(SENTEN))
INCS = -I incs/ -I libs/libft/incs
LIBS = libs/libft/libft.a

all: $(NAME)

$(NAME):
	@$(CC) -o $(NAME) $(CFLAGS) $(SRCS) $(LIBS) $(INCS)

fclean:
	@rm -rf $(NAME)

re: fclean all
