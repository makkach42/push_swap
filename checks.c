/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:24:52 by makkach           #+#    #+#             */
/*   Updated: 2025/01/16 16:30:56 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"
#include <stdio.h>

int    pars(char **argv, int argc)
{
    int i;

    i = 0;
    if (!argv)
        return (0);
    while (i < argc)
    {
        // printf("{%d}\n{%d}\n", argc, i);
        // printf("[%s]\n", argv[i]);
        if (valid(argv[i]) == 0 || range_check(argv[i]) == 0)
        {
            return (1);
        }
        // else
        //     // write(1, "OK\n", 3);
        //     return (0);
        i++;
    }
    return (0);
}

int valid(char *str)
{
    int i;

    i = 0;
    if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
        i++;
    else if (str[i] == '+' && str[i + 1] >= '0' && str[i + 1] <= '9')
        i++;
    else if (str[i] < '0' || str[i] > '9')
    {
        return (0);
    }
    while (str[i] >= '0' && str[i] <= '9')
        i++;
    if ((size_t)i < ft_strlen(str))
    {
        return (0);
    }
    return (1);
}


int range_check(char *str)
{
    if (ft_atoi(str) > INT_MAX || ft_atoi(str) < INT_MIN)
    {
        return (0);
    }
    return (1);
}

int ifsorted(t_stack **a)
{
    t_stack *current;
    t_stack *next;
    t_stack **tmp;

    tmp = a;
    current = *tmp;
    next = NULL;
    while (current->next)
    {
        next = current->next;
        if (current->data > next->data)
            return (0);
        current = current->next;
    }
    return (1);
}

// int dups(t_stack *c, int nbr)
// {
//     t_stack *tmp;

//     tmp = c->next;
//     while (tmp && tmp->next)
//     {
//         if (tmp->data == nbr)
//         {
//             // write(1, "ErorR\n", 6);
//             return (1);
//         }
//         tmp = tmp->next;
//         // printf("AAA\n");
//     }
//     // write(1, "OK\n", 3);
//     return (0);
// }
