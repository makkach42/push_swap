/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:17:29 by makkach           #+#    #+#             */
/*   Updated: 2025/02/06 10:28:15 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_min_for_index(t_stack *c)
{
	t_stack	*current;
	t_stack	*min_node;
	int		min_val;

	min_val = INT_MAX;
	current = c;
	min_node = NULL;
	while (current)
	{
		if (current->data < min_val && current->index == -1)
		{
			min_val = current->data;
			min_node = current;
		}
		current = current->next;
	}
	return (min_node);
}

void	indexing(t_stack *c)
{
	t_stack	*tmp;
	t_stack	*min;
	int		i;
	int		count;

	if (!c)
		return ;
	tmp = c;
	count = 0;
	while (tmp)
	{
		tmp->index = -1;
		count++;
		tmp = tmp->next;
	}
	i = 0;
	while (i < count)
	{
		min = find_min_for_index(c);
		if (min)
			min->index = i;
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

void	algo_helper3(t_stack *tmp, int *max, int *counter, t_stack **b)
{
	tmp = *b;
	*max = -1;
	*counter = 0;
	while (tmp)
	{
		if (tmp->index > *max)
			*max = tmp->index;
		tmp = tmp->next;
	}
}
