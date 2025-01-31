/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:43:43 by makkach           #+#    #+#             */
/*   Updated: 2025/01/31 11:58:48 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_algo(t_stack **a, t_stack **b)
{
    t_stack *tmp;
    int len;
    int counter;
    int max;

    while (*b)
    {
        tmp = *b;
        counter = 0;
        max = -1;
        
        tmp = *b;
        while (tmp)
        {
            if (tmp->index > max)
                max = tmp->index;
            tmp = tmp->next;
        }

        tmp = *b;
        counter = 0;
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
    }
}

void	less_than_100(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	indexing(*a);
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + 15)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
	sort_algo(a, b);
}

void	more_than_100(t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	indexing(*a);
	while (*a)
	{
		if ((*a)->index <= i)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + 42)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
	sort_algo(a, b);
}

void	sort_stack(t_stack **a, t_stack **b, int argc)
{
	if (argc > 100)
		more_than_100(a, b);
	else if (argc <= 100)
		less_than_100(a, b);
}
