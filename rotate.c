/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 12:50:05 by makkach           #+#    #+#             */
/*   Updated: 2025/01/23 15:43:31 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rotate(t_stack **c)
{
    t_stack *head;
    t_stack *tail;

    head = *c;
    tail = head;
    while (tail->next)
        tail = tail->next;
    *c = (*c)->next;
    tail->next = head;
    head->next = NULL;
}
static void reverse(t_stack **c)
{
    t_stack *head;
    t_stack *tail;
    t_stack *beforetail;

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

void ra(t_stack **c)
{
    rotate(c);
    write(1, "ra\n", 3);
}
void rb(t_stack **c)
{
    rotate(c);
    write(1, "rb\n", 3);
}
void rr(t_stack **a, t_stack **b)
{
    rotate(a);
    rotate(b);
    write(1, "rr\n", 3);
}

void rra(t_stack **c)
{
    reverse(c);
    write(1, "rra\n", 4);
}
void rrb(t_stack **c)
{
    reverse(c);
    write(1, "rrb\n", 4);
}
void rrr(t_stack **a, t_stack **b)
{
    reverse(a);
    reverse(b);
    write(1, "rrr\n", 4);
}