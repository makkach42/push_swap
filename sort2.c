/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:43:43 by makkach           #+#    #+#             */
/*   Updated: 2025/01/26 18:25:33 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int from_top_to_max(t_stack *b, int max)
{
    int i = 0;
    t_stack *tmp;
    while (tmp->index != max)
    {
        tmp = tmp->next;
        i++;
    }

    return (i);
}
void sort_algo(t_stack **a, t_stack **b, int argc)
{
    int len = stack_lenth(b);
    indexing(*b, argc);
    while (len > 0)
    {
        t_stack *tmp;
        int counter;
        int max;
        
        tmp = *b;
        counter = 0;
        max = len - 1;
        while (tmp && tmp->index != max)
        {
            counter++;
            tmp = tmp->next;
        }
        if (counter <= len / 2)
        {
            while ((*b)->index != max)
                rb(b);
        }
        else
        {
            while ((*b)->index != max)
                rrb(b);
        }
        pa(b, a);
        len--;
    }  
}
void less_than_100(t_stack **a, t_stack **b, int argc)
{
    int i = 0;
    
    indexing(*a, argc);
    while (*a)
    {
        if ((*a)->index <= i)
        {       
            pb(a, b);
            rb(b);
            i++;
        }
        else if ((*a)->index <= i + 15)
        {
            pb(a, b);
            i++;
        }
        else
            ra(a);  
    }
    sort_algo(a, b, argc);
}
void more_than_100(t_stack **a, t_stack **b, int argc)
{
    int i = 0;
    
    indexing(*a, argc);
    while (*a)
    {
        if ((*a)->index <= i)
        {       
            pb(a, b);
            rb(b);
            i++;
        }
        else if ((*a)->index <= i + 42)
        {
            pb(a, b);
            i++;
        }
        else
            ra(a);  
    }
    sort_algo(a, b, argc);
}
void sort_stack(t_stack **a, t_stack **b, int argc)
{
    if (argc > 100)
        more_than_100(a, b, argc);
    else if (argc <= 100)
        less_than_100(a, b, argc);
}
