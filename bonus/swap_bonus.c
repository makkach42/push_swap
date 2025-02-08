/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:30:30 by makkach           #+#    #+#             */
/*   Updated: 2025/02/08 10:54:40 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	swap(t_stack *c)
{
	int	tmp;

	if (c == NULL || c->next == NULL)
		return ;
	tmp = c->data;
	c->data = c->next->data;
	c->next->data = tmp;
}

void	sa_bonus(t_stack *s)
{
	swap(s);
}

void	sb_bonus(t_stack *s)
{
	swap(s);
}

void	ss_bonus(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
}