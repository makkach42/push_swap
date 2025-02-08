/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:42:42 by makkach           #+#    #+#             */
/*   Updated: 2025/02/08 18:53:40 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_five(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	indexing(*a);
	while (stack_lenth(&b) < 2)
	{
		if ((*a)->index == 0 || (*a)->index == 1)
			pb(a, &b);
		else
			ra(a);
	}
	sortthree(a);
	if (b->index < b->next->index)
		sb(b);
	pa(&b, a);
	pa(&b, a);
}

static void	sort_foor(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	indexing(*a);
	while (stack_lenth(&b) < 1)
	{
		if ((*a)->index == 0)
			pb(a, &b);
		else
			ra(a);
	}
	sortthree(a);
	pa(&b, a);
}

void	sort(t_stack **a)
{
	if (stack_lenth(a) == 5)
	{
		sort_five(a);
		free_list(a);
		exit(1);
	}
	if (stack_lenth(a) == 4)
	{
		sort_foor(a);
		free_list(a);
		exit(1);
	}
	if (stack_lenth(a) == 3)
	{
		sortthree(a);
		free_list(a);
		exit(1);
	}
	if (stack_lenth(a) == 2)
	{
		sa(*a);
		free_list(a);
		exit(1);
	}
}

int	ft_mini_sort(t_stack *list)
{
	int	count;
	int	espace;

	count = 0;
	espace = 0;
	while (list && list->next)
	{
		espace = list->data - list->next->data;
		if (espace == 2 || espace == 3 || espace == 4)
			count++;
		list = list->next;
	}
	if (count >= 15 && count <= 498)
		return (1);
	return (0);
}
