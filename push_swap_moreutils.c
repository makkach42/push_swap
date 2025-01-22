/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moreutils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 14:33:55 by makkach           #+#    #+#             */
/*   Updated: 2025/01/19 10:16:30 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// t_stack *swap_a(t_stack *a)
// {
//     t_stack *c;
//     t_stack *n;

//     if (!a || !a->next)
//         return (NULL);
//     c = a;
//     n = c->next;

//     c->next = n->next;
//     n->next = c;
//     write(1, "sa\n", 3);
//     a = n;
//     return (n);
// }
// t_stack *swap_b(t_stack *b)
// {
//     t_stack *c;
//     t_stack *n;

//     c = b;
//     n = c->next;

//     c->next = n->next;
//     n->next = c;
//     write(1, "sb\n", 3);
//     b = n;
//     return (n);
// }
// void    swap_swap(t_stack **a, t_stack **b)
// {
//     swap_a(*a);
//     swap_b(*b);
//     write(1, "ss\n", 3);
// }
// t_stack *push_a(t_stack **a , t_stack **b)
// {
//     t_stack *last;
//     t_stack *belem;
//     t_stack *tmp;

//     last = *a;
//     belem = *b;
//     tmp = belem->next;
//     while (last->next)
//         last = last->next;
//     last->next = belem;
//     belem -> next = NULL;
//     write(1, "pa\n", 3);
//     return (tmp);
// }
// t_stack *push_b(t_stack *b , t_stack *a)
// {
//     t_stack *last;
//     t_stack *aelem;
//     t_stack *tmp;

//     last = b;
//     aelem = a;

//     tmp = aelem->next;
//     if (stack_lenth(&b) == 0)
//     {
//         b = tmp;
//         tmp = b;
//         return (tmp);
//     }
//     while (last && last->next)
//         last = last->next;
//     last->next = aelem;
//     aelem -> next = NULL;
//     write(1, "pb\n", 3);
//     return (tmp);
// }
