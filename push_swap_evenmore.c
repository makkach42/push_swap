/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_evenmore.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 17:11:12 by makkach           #+#    #+#             */
/*   Updated: 2025/01/19 10:16:22 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

// t_stack *rotate_a(t_stack **a)
// {
//     t_stack *first;
//     t_stack *last;
//     t_stack *tmp;

//     first = *a;
//     last = *a;
//     while (last->next)
//         last = last->next;
//     last->next = first;
//     tmp = first->next;
//     first->next = NULL;
//     write(1, "ra\n", 3);
//     return (tmp);
// }
// t_stack *rotate_b(t_stack **b)
// {
//     t_stack *first;
//     t_stack *last;
//     t_stack *tmp;

//     first = *b;
//     last = *b;
//     while (last->next)
//         last = last->next;
//     last->next = first;
//     tmp = first->next;
//     first->next = NULL;
//     write(1, "rb\n", 3);
//     return (tmp);
// }

// t_stack *rotate_rotate_return_a(t_stack **a, t_stack **b)
// {
//     t_stack *tmp;
//     t_stack *tmp2;
//     tmp = rotate_a(a);
//     tmp2 = rotate_b(b);
//     write(1, "rr\n", 3);
//     return (tmp);
// }
// t_stack *rotate_rotate_return_b(t_stack **a, t_stack **b)
// {
//     t_stack *tmp;
//     t_stack *tmp2;
//     tmp = rotate_a(a);
//     tmp2 = rotate_b(b);
//     write(1, "rr\n", 3);
//     return (tmp2);
// }
// t_stack *reverse_rotate_a(t_stack **a)
// {
//     t_stack *first;
//     t_stack *last;
//     t_stack *tmp;
//     t_stack *second_to_last;

//     first = *a;
//     last = *a;
//     second_to_last = *a;

//     while (last->next)
//         last = last->next;
//     while (second_to_last->next != last)
//         second_to_last = second_to_last->next;    
//     last->next = first;
//     second_to_last->next = NULL;
//     write(1, "rra\n", 4);
//     tmp = last;
//     return (tmp);
// }
// t_stack *reverse_rotate_b(t_stack **b)
// {
//     t_stack *first;
//     t_stack *last;
//     t_stack *tmp;
//     t_stack *second_to_last;

//     first = *b;
//     last = *b;
//     second_to_last = *b;

//     while (last->next)
//         last = last->next;
//     while (second_to_last->next != last)
//         second_to_last = second_to_last->next;
    
//     last->next = first;
//     second_to_last->next = NULL;
//     b = &(last);
//     tmp = last;
//     write(1, "rrb\n", 4);
//     return (tmp);
// }

    // a = &tmp;
    // t_stack *tmp;
    // tmp = first->next;
    // return (tmp);