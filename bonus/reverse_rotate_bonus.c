/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:07:53 by makkach           #+#    #+#             */
/*   Updated: 2025/02/08 12:42:23 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static void	reverse(t_stack **c)
{
	t_stack	*head;
	t_stack	*tail;
	t_stack	*beforetail;

	if (!c || !*c || !(*c)->next)
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

void	rra_bonus(t_stack **c)
{
	reverse(c);
}

void	rrb_bonus(t_stack **c)
{
	reverse(c);
}

void	rrr_bonus(t_stack **a, t_stack **b)
{
	reverse(a);
	reverse(b);
}
