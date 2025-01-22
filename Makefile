# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: makkach <makkach@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/09 10:43:12 by makkach           #+#    #+#              #
#    Updated: 2025/01/19 13:36:31 by makkach          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

source = ft_split.c push_swap_utils.c swap.c push.c rotate.c checks.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c push_swap_evenmore.c push_swap_moreutils.c push_swap_probablylastutile.c libft_funcs.c
objects = $(source:.c=.o)



NAME = push_swap

CC = cc

CFLAGS = -Werror -Wall -Wextra -g

RM = rm -rf


all : $(NAME)

$(NAME):  $(objects)
		$(CC) $(CFLAGS) $(objects) -o $(NAME)


clean:
		$(RM) $(objects)

fclean:	clean
	$(RM) push_swap


re : fclean all
