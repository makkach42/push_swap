# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makkach <makkach@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 10:43:12 by makkach           #+#    #+#              #
#    Updated: 2025/02/18 11:14:58 by makkach          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_DIR = mandatory
BONUS_DIR = bonus

source			= 	$(SRC_DIR)/checks.c \
					$(SRC_DIR)/ft_split.c \
					$(SRC_DIR)/libft_funcs.c \
					$(SRC_DIR)/push_swap_probablylastutile.c \
					$(SRC_DIR)/push_swap_utils.c \
					$(SRC_DIR)/push_swap.c \
					$(SRC_DIR)/push.c \
					$(SRC_DIR)/reverse_rotate.c \
					$(SRC_DIR)/rotate.c \
					$(SRC_DIR)/sort.c \
					$(SRC_DIR)/sort2.c \
					$(SRC_DIR)/sort3.c \
					$(SRC_DIR)/swap.c
source_bonus	= 	$(BONUS_DIR)/checker_bonus.c \
					$(BONUS_DIR)/checker_helper_bonus.c \
					$(BONUS_DIR)/checks_bonus.c \
					$(BONUS_DIR)/ft_atoi_bonus.c \
					$(BONUS_DIR)/ft_split_bonus.c \
					$(BONUS_DIR)/get_next_line_bonus.c \
					$(BONUS_DIR)/get_next_line_utils_bonus.c \
					$(BONUS_DIR)/more_checks_bonus.c \
					$(BONUS_DIR)/more_helper_bonus.c \
					$(BONUS_DIR)/operation_checks_bonus.c \
					$(BONUS_DIR)/push_bonus.c \
					$(BONUS_DIR)/reverse_rotate_bonus.c \
					$(BONUS_DIR)/rotate_bonus.c \
					$(BONUS_DIR)/swap_bonus.c 

objects = $(source:.c=.o)
objects_bonus = $(source_bonus:.c=.o)

NAME = push_swap
NAME2 = checker

CC = cc
CFLAGS = -Wall -Werror -Wextra

RM = rm -rf

all: $(NAME)

$(NAME): $(objects) $(SRC_DIR)/push_swap.h
	$(CC) $(CFLAGS) $(objects) -o $(NAME)
bonus: $(NAME2)

$(NAME2): $(objects_bonus) $(BONUS_DIR)/checker_bonus.h
	$(CC) $(CFLAGS) $(objects_bonus) -o $(NAME2)

clean:
	$(RM) $(objects) $(objects_bonus)

fclean: clean
	$(RM) push_swap checker

re: fclean all

