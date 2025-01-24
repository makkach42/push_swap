# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makkach <makkach@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 10:43:12 by makkach           #+#    #+#              #
#    Updated: 2025/01/24 11:16:07 by makkach          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

source = ft_split.c push_swap_utils.c swap.c sort.c sort2.c sort3.c push.c rotate.c checks.c push_swap_probablylastutile.c libft_funcs.c

objects = $(source:.c=.o)

NAME = push_swap

CC = cc

CFLAGS = -Werror -Wall -Wextra #-g -fsanitize=address

RM = rm -rf

all : $(NAME)

$(NAME):  $(objects) push_swap.h
		$(CC) $(CFLAGS) $(objects) -o $(NAME)

clean:
		$(RM) $(objects)

fclean:	clean
	$(RM) push_swap

re : fclean all
