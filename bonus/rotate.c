/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:50:05 by makkach           #+#    #+#             */
/*   Updated: 2025/02/03 15:48:45 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **c)
{
	t_stack	*head;
	t_stack	*tail;

	head = *c;
	tail = head;
	while (tail->next)
		tail = tail->next;
	*c = (*c)->next;
	tail->next = head;
	head->next = NULL;
}

void	ra(t_stack **c)
{
	rotate(c);
}

void	rb(t_stack **c)
{
	rotate(c);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}
