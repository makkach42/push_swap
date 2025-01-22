/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_probablylastutile.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:08:34 by makkach           #+#    #+#             */
/*   Updated: 2025/01/22 12:16:44 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void    reverse_rotate_rotate(t_stack **a, t_stack **b)
// {
//     reverse_rotate_a(a);
//     reverse_rotate_b(b);
//     write(1, "rrr\n", 4);
// }
t_stack *find_highest(t_stack **c)
{
    t_stack *current;
    t_stack *highest;
    t_stack **tmp;

    tmp = c;
    current = *tmp;
    highest = malloc(sizeof(t_stack));
    highest->data = 0;
    while (current)
    {
        if (highest->data < current->data)
        {
            highest->data = current->data;
            current = current->next;
        }
        else if (highest->data > current->data)
            current = current->next;
        else
            current = current->next;
    }
    return (highest);
}

void    sortthree(t_stack **c)
{

    t_stack *highest;

    highest = find_highest(c);
    if ((*c)->data == highest->data)
        ra(c);
    else if ((*c)->next->data == highest->data)
        rra(c);
    if ((*c)->data > (*c)->next->data)
        sa(*c);
    free(highest);
}

int stack_lenth(t_stack **c)
{
    t_stack *tmp;
    int counter;
    if (!c || !*c)
        return (0);
    tmp = *c;
    counter = 0;
    while (tmp)
    {
        counter++;
        tmp = tmp->next;
    }
    return (counter);
}