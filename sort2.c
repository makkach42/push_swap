/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:43:43 by makkach           #+#    #+#             */
/*   Updated: 2025/01/26 16:57:41 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *find_min(t_stack *c)
{
    t_stack *tmp;
    int lowest;
    lowest = INT_MAX;
    tmp = c;
    while (c)
    {
        if (c->data < lowest)
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

void    set_a_target(t_stack *a, t_stack *b)
{
    t_stack *target;
    t_stack *this_a;
    long    best_match;

    while (b)
    {
        best_match = LONG_MAX;
        this_a = a;
        while (this_a)
        {
            if (b->data < this_a->data && this_a->data < best_match)
            {
                best_match = this_a->data;
                target = this_a;
            }
            this_a = this_a->next;
        }
        if (best_match == LONG_MAX)
            b->target = find_min(a);
        else 
            b->target = target;
        b = b->next;
    }
}

void node_innit(t_stack *a, t_stack *b, int argc)
{
    median_status(a);
    median_status(b);
    indexing(a, argc);
    indexing(b, argc);
    // set_a_target(a, b);
    // cost(a, b);
    // cheapest_reset(b);
    // set_cheepest(b);
}
void b_push(t_stack **b, t_stack **a)
{
    t_stack *tmp;
    t_stack *tmp2;
    tmp = *b;
    while (tmp)
    {
        if (tmp->cheapest == 1)
            break ;
        tmp = tmp->next;
    }
    tmp2 = tmp->target;
    // printf("a    = %d\ntmp2 = %d\n", (*a)->data, tmp2->data);
    // printf("b   = %d\ntmp = %d\n", (*b)->data, tmp->data);
    // while ((*b)->data != tmp->data && (*a)->data != tmp2->data)
    // {
    //         // printf("tmp  = %d\n", tmp->above_median);
    //         // printf("tmp2 = %d\n", tmp2->above_median);
    //     if ((*b)->data != tmp->data && (*a)->data == tmp2->data)
    //     {
    //         while (b && (*b) && tmp && (*b)->data != tmp->data)
    //         {
    //             if (tmp->above_median == 0)
    //                 rb(b);
    //             if (tmp->above_median == 1)
    //                 rrb(b);
    //         }
    //     }
    //     if ((*a)->data != tmp2->data && (*b)->data == tmp->data)
    //     {
    //         while (a && (*a) && tmp2 && (*a)->data != tmp2->data)
    //         {
    //             if (tmp2->above_median == 0)
    //                 ra(a);
    //             if (tmp2->above_median == 1)
    //                 rra(a);
    //         }
    //     }
    //     if ((*b)->data != tmp->data && (*a)->data != tmp2->data)
    //     {
    //         if (tmp->above_median == 0 && tmp2->above_median == 0)
    //             rr(a,b);
    //         if (tmp->above_median == 1 && tmp2->above_median == 1)
    //             rrr(a, b);
    //         else 
    //             break ;
    //     }
    // }

    // while ((*a)->data != tmp2->data && (*b)->data != tmp->data)
    // {
    //     if ((*b)->data != tmp->data)
    //     {
    //         while ((*b)->data != tmp->data)
    //         {
    //             if (tmp->above_median == 0)
    //                 rb(b);
    //             if (tmp->above_median == 1)
    //                 rrb(b);
    //         }
    //     }
    //     if ((*a)->data != tmp2->data)
    //     {
    //         while ((*a)->data != tmp2->data)
    //         {
    //             if (tmp2->above_median == 0)
    //                 ra(a);
    //             if (tmp2->above_median == 1)
    //                 rra(a);
    //         }
    //     }
    //     else 
    //     {
    //         if (tmp->above_median == 0 && tmp->above_median == 0)
    //             rr(a, b);
    //         if (tmp->above_median == 1 && tmp->above_median == 1)
    //             rrr(a, b);
    //     }
    // }

    while (b && (*b) && tmp && (*b)->data != tmp->data)
    {
        if (tmp->above_median == 0)
            rb(b);
        else if (tmp->above_median == 1)
            rrb(b);
    }
    while (a && (*a) && tmp2 && (*a)->data != tmp2->data)
    {
        if (tmp2->above_median == 0)
            ra(a);
        else if (tmp2->above_median == 1)
            rra(a);
    }
    pa(b, a);
}

int from_top_to_max(t_stack *b, int max)
{
    int i = 0;
    t_stack *tmp;
    while (tmp->index != max)
    {
        tmp = tmp->next;
        i++;
    }

    return (i);
}
void    sort_stack2(t_stack **a, t_stack **b, int argc)
{
    int max;

    int lent = stack_lenth(b);
    indexing(*b, argc);
    while (lent)
    {
        max = lent - 1;
        int position = from_top_to_max(*b, (lent - 1));
        int AAAAAAA = lent - position;
        break ;
        // pa(b, a);
        lent--;
    }
}
// void    sort_stack(t_stack **a, t_stack **b, int argc)
// {
//     int i;
//     int j;
//     int halflen;
//     t_stack *tmp;
//     t_stack *tmp2;

//     i = 0;
//     j = 0;
//     indexing(*a, argc);
//     while (*a)
//     {
//         if ((*a)->index <= i)
//         {       
//             pb(a, b);
//             rb(b);
//             i++;
//         }
//         else if ((*a)->index <= i + 15)
//         {
//             pb(a, b);
//             i++;
//         }
//         else
//             ra(a);  
//     }
//     indexing(*b, argc);
//     int lent = stack_lenth(b);
//     int len = lent;
//     int counter;
//     int rest;

//     rest = 0;
//     counter = 0;
//     while (len > 0)
//     {
//         int max = len - 1;
//         tmp = *b;
//         while (tmp->index != len - 1)
//         {
//             tmp = tmp->next;
//             counter++;
//         }
//         while (tmp)
//         {
//             tmp = tmp->next;
//             rest++;
//         }
//         if (counter <= rest)
//         {
//             while ((*b)->index != len - 1)
//                 rb(b);
//         }
//         else
//         {
//             while ((*b)->index != len - 1)
//                 rrb(b);
//         }
//         pa(b, a);
//         len--;
//     }

// }
void sort_stack(t_stack **a, t_stack **b, int argc)
{
    int i = 0;
    
    indexing(*a, argc);
    // if ()
    while (*a)
    {
        if ((*a)->index <= i)
        {       
            pb(a, b);
            rb(b);
            i++;
        }
        else if ((*a)->index <= i + 42)
        {
            pb(a, b);
            i++;
        }
        else
            ra(a);  
    }
    
    indexing(*b, argc);
    int len = stack_lenth(b);
    
    while (len > 0)
    {
        t_stack *tmp = *b;
        int counter = 0;
        int max = len - 1;
        
        // Find position of max element
        while (tmp && tmp->index != max)
        {
            counter++;
            tmp = tmp->next;
        }
        
        // Rotate to top efficiently
        if (counter <= len / 2)
        {
            while ((*b)->index != max)
                rb(b);
        }
        else
        {
            while ((*b)->index != max)
                rrb(b);
        }
        
        pa(b, a);
        len--;
    }
}
        // median_status(*b);

        // tmp = *b;
        // while (tmp->data != max)
        //     tmp = tmp->next;
        // while ((*b)->data != tmp->data)
        // {
        //     if (tmp->above_median == 0)
        //         rb(b);
        //     else if (tmp->above_median == 1)
        //         rrb(b);
        // }


//    t_stack *tmp;

//     indexing((*a), argc);
//     int len;
//     len = stack_lenth(a);
//     int half = len / 2;

//     while (stack_lenth(a) > half)
//     {
//         if ((*a)->index < half)
//             ra(a);
//         else
//             pb(a, b);
//     }
//     while (stack_lenth(a) > 3)
//         pb(a, b);
//     sortthree(a);
//     while ((*b))
//     {    
//         tmp = *b;
//         node_innit(*a, *b, argc);
//         while (tmp->cheapest != 1)
//             tmp = tmp->next;
//         while ((*b)->cheapest != 1)
//         {
//             if (tmp->above_median == 0)
//                 rb(b);
//             else if (tmp->above_median == 1)
//                 rrb(b);
//         }
//         while ((*a) != (*b)->target)
//         {

//             if (tmp->above_median == 0)
//                 ra(a);
//             else if (tmp->above_median == 1)
//                 rra(a);
//         }
//         pa(b, a);
//     }
//     if (tmp->above_median == 0)
//     {
//         while ((*a)->index != 0)
//             ra(a);
//     }
//     if (tmp->above_median == 1)
//     {
//         while ((*a)->index != 0)
//             rra(a);
//     }
//     // if (*b)
//     //     node_innit(*a, *b, argc);
//     // while (*b)
//     // {
//     //     node_innit(*a, *b, argc);
//     //     b_push(b, a);
//     // }
//     // tmp = find_min(*a);
//     // if (tmp->above_median == 1)
//     // {
//     //     while (*a != tmp)
//     //         rra(a);
//     // }
//     // else if(tmp->above_median == 0)
//     // {
//     //     while (*a != tmp)
//     //         ra(a);
//     // }



