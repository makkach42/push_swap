/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_probablylastutile.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 18:08:34 by makkach           #+#    #+#             */
/*   Updated: 2025/01/30 16:22:21 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
// t_stack *find_max(t_stack *c)
// {
//     t_stack *tmp;
//     int highest;
//     highest = 0;
//     tmp = c;
//     while (c)
//     {
//         if (c->data > highest)
//             highest = c->data;
//         else
//             c = c->next;
//     }
//     c = tmp;
//     while (c)
//     {
//         if (c->data == highest)
//             break ;
//         c = c->next;
//     }
//     tmp = c;
//     return (tmp);
// }
void    sortthree(t_stack **c)
{

    t_stack *highest;
    t_stack *tmp;
    tmp = *c;
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