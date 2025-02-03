/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:30:30 by makkach           #+#    #+#             */
/*   Updated: 2025/02/03 15:48:33 by makkach          ###   ########.fr       */
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
}

void	sb(t_stack *s)
{
	swap(s);
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
}
