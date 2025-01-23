/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:43:43 by makkach           #+#    #+#             */
/*   Updated: 2025/01/23 18:47:39 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *find_min(t_stack *c)
{
    t_stack *tmp;
    int lowest;
    lowest = INT_MAX;
    tmp = c;
    while (c)
    {
        if (c->data < lowest)
            lowest = c->data;
        else
            c = c->next;
    }
    c = tmp;
    while (c)
    {
        if (c->data == lowest)
            break ;
        c = c->next;
    }
    tmp = c;
    return (tmp);
}

void    set_a_target(t_stack *a, t_stack *b)
{
    t_stack *target;
    t_stack *this_a;
    long    best_match;

    while (b)
    {
        best_match = LONG_MAX;
        this_a = a;
        while (this_a)
        {
            if (b->data < this_a->data && this_a->data < best_match)
            {
                best_match = this_a->data;
                target = this_a;
            }
            this_a = this_a->next;
        }
        if (best_match == LONG_MAX)
            b->target = find_min(a);
        else 
            b->target = target;
        b = b->next;
    }
}

void node_innit(t_stack *a, t_stack *b)
{
    current_index(a);
    current_index(b);
    set_a_target(a, b);
    cost(a, b);
    cheapest_reset(b);
    set_cheepest(b);
}
void b_push(t_stack **b, t_stack **a)
{
    t_stack *tmp;
    t_stack *tmp2;
    tmp = *b;
    while (tmp)
    {
        if (tmp->cheapest == 1)
            break ;
        tmp = tmp->next;
    }
    tmp2 = tmp->target;
    // printf("a    = %d\ntmp2 = %d\n", (*a)->data, tmp2->data);
    // printf("b   = %d\ntmp = %d\n", (*b)->data, tmp->data);
    // while ((*b)->data != tmp->data && (*a)->data != tmp2->data)
    // {
    //         // printf("tmp  = %d\n", tmp->above_median);
    //         // printf("tmp2 = %d\n", tmp2->above_median);
    //     if ((*b)->data != tmp->data && (*a)->data == tmp2->data)
    //     {
    //         while (b && (*b) && tmp && (*b)->data != tmp->data)
    //         {
    //             if (tmp->above_median == 0)
    //                 rb(b);
    //             if (tmp->above_median == 1)
    //                 rrb(b);
    //         }
    //     }
    //     if ((*a)->data != tmp2->data && (*b)->data == tmp->data)
    //     {
    //         while (a && (*a) && tmp2 && (*a)->data != tmp2->data)
    //         {
    //             if (tmp2->above_median == 0)
    //                 ra(a);
    //             if (tmp2->above_median == 1)
    //                 rra(a);
    //         }
    //     }
    //     if ((*b)->data != tmp->data && (*a)->data != tmp2->data)
    //     {
    //         if (tmp->above_median == 0 && tmp2->above_median == 0)
    //             rr(a,b);
    //         if (tmp->above_median == 1 && tmp2->above_median == 1)
    //             rrr(a, b);
    //         else 
    //             break ;
    //     }
    // }

    // while ((*a)->data != tmp2->data && (*b)->data != tmp->data)
    // {
    //     if ((*b)->data != tmp->data)
    //     {
    //         while ((*b)->data != tmp->data)
    //         {
    //             if (tmp->above_median == 0)
    //                 rb(b);
    //             if (tmp->above_median == 1)
    //                 rrb(b);
    //         }
    //     }
    //     if ((*a)->data != tmp2->data)
    //     {
    //         while ((*a)->data != tmp2->data)
    //         {
    //             if (tmp2->above_median == 0)
    //                 ra(a);
    //             if (tmp2->above_median == 1)
    //                 rra(a);
    //         }
    //     }
    //     else 
    //     {
    //         if (tmp->above_median == 0 && tmp->above_median == 0)
    //             rr(a, b);
    //         if (tmp->above_median == 1 && tmp->above_median == 1)
    //             rrr(a, b);
    //     }
    // }

    while (b && (*b) && tmp && (*b)->data != tmp->data)
    {
        if (tmp->above_median == 0)
            rb(b);
        else if (tmp->above_median == 1)
            rrb(b);
    }
    while (a && (*a) && tmp2 && (*a)->data != tmp2->data)
    {
        if (tmp2->above_median == 0)
            ra(a);
        else if (tmp2->above_median == 1)
            rra(a);
    }
    pa(b, a);
}

void    sort_stack(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    if (stack_lenth(a) > 3)
        pb(a, b);
    if (stack_lenth(a) > 3)
        pb(a, b);
    while (stack_lenth(a) > 3)
    {
        node_innit(*a, *b);
        pb(a, b);
        node_innit(*a, *b);
    }
    sortthree(a);
    if (*b)
        node_innit(*a, *b);
    while (*b)
    {
        node_innit(*a, *b);
        b_push(b, a);
    }
    tmp = find_min(*a);
    if (tmp->above_median == 1)
    {
        while (*a != tmp)
            rra(a);
    }
    else if(tmp->above_median == 0)
    {
        while (*a != tmp)
            ra(a);
    }
}