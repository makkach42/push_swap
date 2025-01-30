/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:17:29 by makkach           #+#    #+#             */
/*   Updated: 2025/01/30 19:19:28 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_min_for_index(t_stack *c)
{
	t_stack	*tmp;
	int		lowest;

	lowest = INT_MAX;
	tmp = c;
	while (c)
	{
		if (c->data < lowest && c->index == -1)
			lowest = c->data;
		else
			c = c->next;
	}
	c = tmp;
	while (c)
	{
		if (c->data == lowest)
			break ;
		c = c->next;
	}
	tmp = c;
	return (tmp);
}

void	indexing(t_stack *c, int argc)
{
	t_stack	*tmp;
	t_stack	*min;
	int		i;

	tmp = c;
	while (tmp)
	{
		tmp->index = -1;
		tmp = tmp->next;
	}
	tmp = c;
	i = 0;
	while (i < argc)
	{
		min = find_min_for_index(tmp);
		if (min)
			min->index = i;
		else
			break ;
		i++;
	}
}

void	algo_helper(t_stack **b, int max)
{
	while ((*b)->index != max)
		rb(b);
}

void	algo_helper2(t_stack **b, int max)
{
	while ((*b)->index != max)
		rrb(b);
}
