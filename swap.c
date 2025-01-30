/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:30:30 by makkach           #+#    #+#             */
/*   Updated: 2025/01/30 17:06:39 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *c)
{
	int	tmp;

	if (!c || !c->next)
		return ;
	tmp = c->data;
	c->data = c->next->data;
	c->next->data = tmp;
}

void	sa(t_stack *s)
{
	swap(s);
	write(1, "sa\n", 3);
}

void	sb(t_stack *s)
{
	swap(s);
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
