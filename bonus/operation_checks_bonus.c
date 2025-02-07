/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_checks.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:10:40 by makkach           #+#    #+#             */
/*   Updated: 2025/02/06 17:19:22 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	handle_swap_operations(char *op, t_stack **a, t_stack **b)
{
	if (ft_strncmp(op, "sa", 2) == 0)
		sa_bonus(*a);
	else if (ft_strncmp(op, "sb", 2) == 0)
		sb_bonus(*b);
	else if (ft_strncmp(op, "ss", 2) == 0)
		ss_bonus(*a, *b);
}

void	handle_rotate_operations(char *op, t_stack **a, t_stack **b)
{
	if (ft_strncmp(op, "ra", 2) == 0)
		ra_bonus(a);
	else if (ft_strncmp(op, "rb", 2) == 0)
		rb_bonus(b);
	else if (ft_strncmp(op, "rr", 2) == 0)
		rr_bonus(a, b);
}

void	handle_reverse_rotate_operations(char *op, t_stack **a, t_stack **b)
{
	if (ft_strncmp(op, "rra", 3) == 0)
		rra_bonus(a);
	else if (ft_strncmp(op, "rrb", 3) == 0)
		rrb_bonus(b);
	else if (ft_strncmp(op, "rrr", 2) == 0)
		rrr_bonus(a, b);
}

void	handle_push_operations(char *op, t_stack **a, t_stack **b)
{
	if (ft_strncmp(op, "pa", 2) == 0)
		pa_bonus(b, a);
	else if (ft_strncmp(op, "pb", 2) == 0)
		pb_bonus(a, b);
}

int	is_valid_operation(char *op)
{
	return (ft_strncmp(op, "sa", 2) == 0
		|| ft_strncmp(op, "sb", 2) == 0
		|| ft_strncmp(op, "ss", 2) == 0
		|| ft_strncmp(op, "ra", 2) == 0
		|| ft_strncmp(op, "rb", 2) == 0
		|| ft_strncmp(op, "rr", 2) == 0
		|| ft_strncmp(op, "rra", 3) == 0
		|| ft_strncmp(op, "rrb", 3) == 0
		|| ft_strncmp(op, "rrr", 2) == 0
		|| ft_strncmp(op, "pa", 2) == 0
		|| ft_strncmp(op, "pb", 2) == 0);
}
