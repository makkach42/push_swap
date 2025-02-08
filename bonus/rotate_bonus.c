/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:50:05 by makkach           #+#    #+#             */
/*   Updated: 2025/02/08 12:42:27 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	rotate(t_stack **c)
{
	t_stack	*head;
	t_stack	*tail;

	if (!c || !*c || !(*c)->next)
		return ;
	head = *c;
	tail = head;
	while (tail->next)
		tail = tail->next;
	*c = (*c)->next;
	tail->next = head;
	head->next = NULL;
}

void	ra_bonus(t_stack **c)
{
	rotate(c);
}

void	rb_bonus(t_stack **c)
{
	rotate(c);
}

void	rr_bonus(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
}
