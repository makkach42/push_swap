/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:43:43 by makkach           #+#    #+#             */
/*   Updated: 2025/02/07 17:12:56 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_algo(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int		len;
	int		counter;
	int		max;
	int		size;

	size = stack_lenth(b);
	while (size > 0)
	{
		algo_helper3(tmp, &max, &counter, b);
		tmp = *b;
		while (tmp && tmp->index != max)
		{
			counter++;
			tmp = tmp->next;
		}
		len = stack_lenth(b);
		if (counter <= len / 2)
			algo_helper(b, max);
		else
			algo_helper2(b, max);
		pa(b, a);
		size--;
	}
}

void	push_to_b(t_stack **a, t_stack **b, int chunk_size, int i)
{
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			if (*b && (*b)->index != i)
				rb(b);
			i++;
		}
		else if ((*a)->index <= (i + chunk_size))
		{
			pb(a, b);
			i++;
		}
		else if (ft_mini_sort(*a) == 1)
			rra(a);
		else if (*a)
			ra(a);
	}
}

void	less_than_100(t_stack **a, t_stack **b)
{
	int	i;
	int	size;
	int	chunk_size;

	size = stack_lenth(a);
	chunk_size = 15;
	i = 0;
	push_to_b(a, b, chunk_size, i);
	sort_algo(a, b);
}

void	more_than_100(t_stack **a, t_stack **b)
{
	int	i;
	int	size;
	int	chunk_size;

	size = stack_lenth(a);
	chunk_size = 42;
	i = 0;
	push_to_b(a, b, chunk_size, i);
	sort_algo(a, b);
}

void	sort_stack(t_stack **a, t_stack **b, int argc)
{
	indexing(*a);
	if (argc > 100)
		more_than_100(a, b);
	else if (argc <= 100)
		less_than_100(a, b);
}
