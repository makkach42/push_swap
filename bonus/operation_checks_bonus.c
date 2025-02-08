/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_checks_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:10:40 by makkach           #+#    #+#             */
/*   Updated: 2025/02/08 11:07:07 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void handle_swap_operations(char *op, t_stack **a, t_stack **b)
{
    if (ft_strncmp(op, "sa\n", 3) == 0)
        sa_bonus(*a);
    else if (ft_strncmp(op, "sb\n", 3) == 0)
        sb_bonus(*b);
    else if (ft_strncmp(op, "ss\n", 3) == 0)
        ss_bonus(*a, *b);
}

void handle_rotate_operations(char *op, t_stack **a, t_stack **b)
{
    if (ft_strncmp(op, "ra\n", 3) == 0)
        ra_bonus(a);
    else if (ft_strncmp(op, "rb\n", 3) == 0)
        rb_bonus(b);
    else if (ft_strncmp(op, "rr\n", 3) == 0)
        rr_bonus(a, b);
}

void handle_reverse_rotate_operations(char *op, t_stack **a, t_stack **b)
{
    if (ft_strncmp(op, "rra\n", 4) == 0)
        rra_bonus(a);
    else if (ft_strncmp(op, "rrb\n", 4) == 0)
        rrb_bonus(b);
    else if (ft_strncmp(op, "rrr\n", 4) == 0)
        rrr_bonus(a, b);
}

void handle_push_operations(char *op, t_stack **a, t_stack **b)
{
    if (ft_strncmp(op, "pa\n", 3) == 0)
        pa_bonus(b, a);
    else if (ft_strncmp(op, "pb\n", 3) == 0)
        pb_bonus(a, b);
}

int is_valid_operation(char *op)
{
    return (ft_strncmp(op, "sa\n", 3) == 0
        || ft_strncmp(op, "sb\n", 3) == 0
        || ft_strncmp(op, "ss\n", 3) == 0
        || ft_strncmp(op, "ra\n", 3) == 0
        || ft_strncmp(op, "rb\n", 3) == 0
        || ft_strncmp(op, "rr\n", 3) == 0
        || ft_strncmp(op, "rra\n", 4) == 0
        || ft_strncmp(op, "rrb\n", 4) == 0
        || ft_strncmp(op, "rrr\n", 4) == 0
        || ft_strncmp(op, "pa\n", 3) == 0
        || ft_strncmp(op, "pb\n", 3) == 0);
}