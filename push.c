/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 18:19:26 by makkach           #+#    #+#             */
/*   Updated: 2025/01/22 12:12:10 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

static void push(t_stack **src, t_stack **dest)
{
    t_stack *tmp;
    t_stack *tmp2;
    if (!(*src) || !(*dest))
        return ;
    if (!dest)
    {
        tmp = (*src)->next;
        *dest = *src;
        *src = tmp;
        (*dest)->next = NULL;
    }
    else
    {
        tmp2 = *dest;
        tmp = (*src)->next;
        *dest = *src;
        *src = tmp;
        (*dest)->next = tmp2;
    }
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
// void    movetob(t_stack **src, t_stack **dest)
// {
//     t_stack *tmp;
//     t_stack *tmp2;
//     if (!src)
//         return ;
//     if (!dest)
//     {
//         tmp = (*src)->next;
//         *dest = *src;
//         *src = tmp;
//         (*dest)->next = NULL;
//     }
//     else
//     {
//         tmp2 = *dest;
//         tmp = (*src)->next;
//         *dest = *src;
//         *src = tmp;
//         (*dest)->next = tmp2;
//     }
// }