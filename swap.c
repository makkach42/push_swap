/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:30:30 by makkach           #+#    #+#             */
/*   Updated: 2025/01/22 10:19:13 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void swap(t_stack *c)
{
    int tmp;
    t_stack *tmp2;
    if (!c || !c->next)
        return ;
    tmp = c->data;
    c->data = c->next->data;
    c->next->data = tmp;
    tmp2 = c->target;
    c->target = c->next->target;
    c->next->target = tmp2;
}

void sa(t_stack *s)
{
    swap(s);
    write(1, "sa\n", 3);
}
void sb(t_stack *s)
{
    swap(s);
    write(1, "sb\n", 3);
}