/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:50:05 by makkach           #+#    #+#             */
/*   Updated: 2025/02/08 16:31:22 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **c)
{
	t_stack	*head;
	t_stack	*tail;

	if (!c || !(*c))
		return ;
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
	write(1, "ra\n", 3);
}

void	rb(t_stack **c)
{
	rotate(c);
	write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
