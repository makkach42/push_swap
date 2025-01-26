/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:17:29 by makkach           #+#    #+#             */
/*   Updated: 2025/01/26 16:21:20 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *find_min_for_index(t_stack *c)
{
    t_stack *tmp;
    int lowest;
    lowest = INT_MAX;
    tmp = c;
    while (c)
    {
        if (c->data < lowest && c->index == -1)
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
void indexing(t_stack *c, int argc)
{
    t_stack *tmp;
    t_stack *min;
    int i;

    tmp = c;
    while (tmp)
    {
        tmp->index = -1;
        tmp = tmp->next;
    }

    tmp = c;
    for (i = 0; i < argc; i++)
    {
        min = find_min_for_index(tmp);
        if (min)
            min->index = i;
        else
            break;
    }
}
void indexing2(t_stack *c)
{
    int i ;
    t_stack *tmp;
    
    i = 0;
    tmp = c;
    while (tmp)
    {
        tmp->index = i;
        i++;
        tmp = tmp->next;
    }

} 