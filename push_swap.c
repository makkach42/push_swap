/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:50:00 by makkach           #+#    #+#             */
/*   Updated: 2025/01/22 12:25:29 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int count_args(char **nums)
{
    int count;

    count = 0;
    while(nums[count])
        count++;
    return (count);
}

static t_stack *set_next(t_stack **tmp, int counter)
{
    t_stack *tmp3;
    counter--;
    tmp3 = tmp[counter];
    while (counter)
    {
        tmp[counter]->next = tmp[counter - 1];
        counter--;
    }
    free(tmp);
    return (tmp3);
}
t_stack *init_stack(char **argv, int count)
{
    t_stack **tmp;
    t_stack *tmp3;
    int counter;

    counter = 0;
    tmp = (t_stack **)malloc(sizeof(t_stack *) * count);
    if (!tmp)
        return (free(tmp), NULL);
    while (counter + 1 < count)
    {
        tmp[counter] = malloc(sizeof(t_stack));
        if (!tmp[counter])
            return (NULL);
        if (counter == 0)
            tmp[counter]->next = NULL;
        tmp[counter]->data = ft_atoi(argv[counter + 1]);
        if (counter + 1 == count)
            tmp3 = tmp[counter];
        counter++;
    }
    return (set_next(tmp, counter));
}
// static t_stack *init_stack(char **argv, int count)
// {
//     t_stack **tmp;
//     t_stack *tmp3;
//     int counter;

//     counter = 0;
//     tmp = (t_stack **)malloc(sizeof(t_stack *) * count);
//     while (counter < count)
//     {
//         tmp[counter] = malloc(sizeof(t_stack));
//         if (counter == 0)
//             tmp3 = tmp[counter];
//         tmp[counter]->data = ft_atoi(argv[counter]);
//         if (counter + 1 == count)
//             tmp[counter]->next = NULL;
//         counter++;
//     }
//     counter = 0;
//     while (counter < count - 1)
//     {
//         tmp[counter]->next = tmp[counter + 1];
//         counter++;
//     }
//     return (tmp3);
// }

// void innit_stack(t_stack **c, char **argv, int count)
// {
//     t_stack *new_node;
//     t_stack *tmp;
//     t_stack *head;
//     int i;

//     i = 1;
//     head = ft_lstnew(argv[0]);
//     tmp = head;
//     while (argv[i])
//     {
//         new_node = ft_lstnew(argv[i]);
//         tmp->next = new_node;
//         tmp = new_node;
//         i++;
//     }
// }
static int    dup_checker(t_stack **c)
{
    t_stack *current;
    t_stack *next;
    t_stack **tmp;

    current = *c;
    tmp = c;
    next = (*tmp)->next;
    while (current->next)
    {
        while (next)
        {
            if (current->data == next->data)
            {
                return (1);
            }
            next = next->next;
        }
        current = current->next;
        next = current->next;
    }
    return (0);
}
// int main(int argc, char **argv)
// {
//     t_stack **a;
//     t_stack **b;
//     t_stack *tmp;
//     a = NULL;
//     b = NULL;
//     tmp = NULL;
//     if (argc == 1)
//         return (0);
//     if (argc == 2 && argv[1][0] == '\0')
//         return (1);
//     argv = splitter_joinner(argv, argc);
//     argc = count_args(argv);
//     if (pars(argv, argc) == 1)
//         return (write(1, "ERROR\n", 6), 0);
//     tmp = init_stack(argv, argc);
//     a = &tmp;
//     if (dup_checker(a) == 1)
//         return (write(1, "ERROR\n", 6), 0);
//     if (ifsorted(a) == 1)
//         return (0);
//     if (stack_lenth(a) == 3)
//         return (a = &tmp, sortthree(a), 0);
//     else if (stack_lenth(a) == 2)
//         return (a = &tmp, swap_a(*a), 0);
//     // else
//     //     sort_stack(a, b);
//     return (0);
// }

    // tmp2 = NULL;