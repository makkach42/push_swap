/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:42:42 by makkach           #+#    #+#             */
/*   Updated: 2025/01/24 11:10:26 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void cheapest_reset(t_stack *c)
{
    t_stack *tmp;
    tmp = c;
    while (tmp)
    {
        if (tmp->cheapest == 1)
            break ;
        tmp = tmp->next;
    }
    if (tmp && tmp->cheapest == 1)
        tmp->cheapest = 0;
}
void set_cheepest(t_stack *c)
{
    t_stack *tmp;
    long cheepest;
    tmp = c;
    cheepest = LONG_MAX;
    while (tmp)
    {
        if (tmp->cost < cheepest)
            cheepest = tmp->cost;
        tmp = tmp->next;
    }
    tmp = c;
    while (tmp)
    {
        if (tmp->cost == cheepest)
            break ;
        tmp = tmp->next;
    }
    tmp->cheapest = 1;
}
void cost(t_stack *a, t_stack *b)
{
    t_stack *tmp;
    int c;
    int d;

    c = stack_lenth(&a);
    d = stack_lenth(&b);
    int i = 0;
    tmp = b;
    while (tmp)
    {
        tmp->index = i;
        i++;
        tmp = tmp->next;
    }
    while (b)
    {
        b->cost = b->index;
        if (b->above_median == 1)
            b->cost = d - b->index;
        if (b->target->above_median == 0)
            b->cost += d - b->target->index;
        else
            b->cost += c - (b->target->index);
        b = b->next;
    }
}
void median_status(t_stack *c)
{
    int i;
    int median;
    t_stack *tmp;
    median = stack_lenth(&c) / 2;
    tmp = c;
    i = 0;
    while (tmp)
    {
        if (i + 1 <= median)
            tmp->above_median = 0;
        else
            tmp->above_median = 1;
        i++;
        tmp = tmp->next;
    }
}
t_stack *find_max(t_stack *c)
{
    t_stack *tmp;
    int highest;
    highest = 0;
    tmp = c;
    while (c)
    {
        if (c->data > highest)
            highest = c->data;
        else
            c = c->next;
    }
    c = tmp;
    while (c)
    {
        if (c->data == highest)
            break ;
        c = c->next;
    }
    tmp = c;
    return (tmp);
}