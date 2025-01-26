/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:19:26 by makkach           #+#    #+#             */
/*   Updated: 2025/01/26 15:44:32 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

static void push(t_stack **src, t_stack **dest)
{
    t_stack *tmp;

    if (!src || !*src)
        return;

    tmp = *src;
    *src = (*src)->next;
    tmp->next = *dest;
    *dest = tmp;
}

void pa(t_stack **src, t_stack **dest)
{
    push(src, dest);
    write(1, "pa\n", 3);
}
void pb(t_stack **src, t_stack **dest)
{
    push(src, dest);
    write(1, "pb\n", 3);
}

    // tmp = *src;
    // *src = (*src)->next;
    // tmp->next = *dest;
    // *dest = tmp;