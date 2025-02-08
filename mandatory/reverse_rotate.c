/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:07:53 by makkach           #+#    #+#             */
/*   Updated: 2025/02/08 16:30:55 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse(t_stack **c)
{
	t_stack	*head;
	t_stack	*tail;
	t_stack	*beforetail;

	if (!c || !(*c))
		return ;
	head = *c;
	tail = head;
	beforetail = head;
	while (tail->next)
		tail = tail->next;
	while (beforetail->next != tail)
		beforetail = beforetail->next;
	tail->next = head;
	beforetail->next = NULL;
	*c = tail;
}

void	rra(t_stack **c)
{
	reverse(c);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **c)
{
	reverse(c);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	reverse(a);
	reverse(b);
	write(1, "rrr\n", 4);
}
