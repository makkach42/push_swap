# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makkach <makkach@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 10:43:12 by makkach           #+#    #+#              #
#    Updated: 2025/02/07 16:57:07 by makkach          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = mandatory
BONUS_DIR = bonus

source = $(wildcard $(SRC_DIR)/*.c)
source_bonus = $(wildcard $(BONUS_DIR)/*.c)

objects = $(source:.c=.o)
objects_bonus = $(source_bonus:.c=.o)

NAME = push_swap
NAME2 = checker

CC = cc
CFLAGS = -Wall -Werror -Wextra -I. 

RM = rm -rf

all: $(NAME)

$(NAME): $(objects) push_swap.h
	$(CC) $(CFLAGS) $(objects) -o $(NAME)
bonus: $(NAME2)

$(NAME2): $(objects_bonus) push_swap.h
	$(CC) $(CFLAGS) $(objects_bonus) -o $(NAME2)

clean:
	$(RM) $(objects) $(objects_bonus)

fclean: clean
	$(RM) push_swap checker

re: fclean all