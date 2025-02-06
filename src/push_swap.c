/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:50:00 by makkach           #+#    #+#             */
/*   Updated: 2025/02/06 15:49:04 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_args(char **nums)
{
	int	count;

	count = 0;
	while (nums[count])
		count++;
	return (count);
}

static t_stack	*set_next(t_stack **tmp, int counter)
{
	t_stack	*tmp3;
	int		counter2;

	counter2 = 0;
	counter--;
	tmp3 = tmp[counter2];
	while (counter)
	{
		tmp[counter2]->next = tmp[counter2 + 1];
		counter2++;
		counter--;
	}
	free(tmp);
	return (tmp3);
}

static t_stack	*init_stack(char **argv, int count)
{
	t_stack	**tmp;
	t_stack	*tmp3;
	int		counter;

	counter = 0;
	tmp = (t_stack **)malloc(sizeof(t_stack *) * count);
	if (!tmp)
		return (free(tmp), NULL);
	while (counter < count)
	{
		tmp[counter] = malloc(sizeof(t_stack));
		if (!tmp[counter])
			return (NULL);
		if (counter == 0)
			tmp3 = tmp[counter];
		tmp[counter]->data = ft_atoi(argv[counter]);
		if (counter + 1 == count)
			tmp[counter]->next = NULL;
		counter++;
	}
	return (set_next(tmp, counter));
}

static int	dup_checker(t_stack **c)
{
	t_stack	*current;
	t_stack	*next;
	t_stack	**tmp;

	current = *c;
	tmp = c;
	next = (*tmp)->next;
	while (current->next)
	{
		while (next)
		{
			if (current->data == next->data)
				return (1);
			next = next->next;
		}
		current = current->next;
		next = current->next;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	if (empty_string_check(argv, argc) == 1)
		return (write(1, "ERROR\n", 6), 1);
	argv = splitter_joinner(argv, argc);
	argc = count_args(argv);
	if (pars(argv, argc) == 1)
		return (write(1, "ERROR\n", 6), 1);
	a = init_stack(argv, argc);
	argv_free(argv);
	if (dup_checker(&a) == 1)
		return (write(1, "ERROR\n", 6), 1);
	if (ifsorted(&a) == 1)
		return (0);
	if (stack_lenth(&a) == 2)
		return (sa(a), free_list(&a), 0);
	else if (stack_lenth(&a) == 3)
		return (sortthree(&a), free_list(&a), 0);
	else
		return (sort_stack(&a, &b, argc), free_list(&a), 0);
}
