/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 15:00:03 by makkach           #+#    #+#             */
/*   Updated: 2025/01/22 15:19:32 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "push_swap.c"

// void current_index(t_stack *c)
// {
//     int i;
//     int median;
//     t_stack *tmp;
//     median = stack_lenth(c) / 2;
//     tmp = c;
//     i = 0;
//     while (tmp)
//     {
//         tmp->index = i;
//         if (i <= median)
//             tmp->above_median = 1;
//         else
//             tmp->above_median = 0;
//         i++;
//         tmp = tmp->next;
//     }
// }

// void node_innit(t_stack *a, t_stack *b)
// {
//     current_index(a);
// }

// void    sort_stack(t_stack *c, t_stack *d)
// {
//     t_stack *a;
//     t_stack *b;

//     a = c;
//     b = d;
//     if (stack_lenth(a) > 3)
//         b = push_b(&d, &c);
//     if (stack_lenth(a) > 3)
//         b = push_b(&d, &c);
//     if (stack_lenth(a) > 3)
//     {
//         node_innit(a, b);
//     }
    
// }