/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:50:35 by makkach           #+#    #+#             */
/*   Updated: 2025/01/23 15:43:39 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int data;
	struct s_stack *next;
	int index;
	int above_median;
	int cost;
	int cheapest;
	struct s_stack *target;
}	t_stack;

char	**ft_split(char *s, char c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup( char *s1);
size_t	ft_strlen( char *str);
char	**splitter_joinner(char **argv, int argc);
long	ft_atoi(char *str);
int		pars(char **argv, int argc);
int		valid(char *str);
int		range_check(char *str);
int		ifsorted(t_stack **a);
void	sortthree(t_stack **c);
int		stack_lenth(t_stack **c);
void	sa(t_stack *s);
void	sb(t_stack *s);
void	pa(t_stack **src, t_stack **dest);
void	pb(t_stack **src, t_stack **dest);
void	ra(t_stack **c);
void	rb(t_stack **c);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **c);
void	rrb(t_stack **c);
void	rrr(t_stack **a, t_stack **b);
void	sort_stack(t_stack **a, t_stack **b);
t_stack	*find_min(t_stack *c);
void	current_index(t_stack *c);
void	cost(t_stack *a, t_stack *b);
void	set_cheepest(t_stack *c);
void	cheapest_reset(t_stack *c);
int		empty_string_check(char **argv, int argc);

# endif