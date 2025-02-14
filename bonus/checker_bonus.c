/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:58:31 by makkach           #+#    #+#             */
/*   Updated: 2025/02/13 13:37:57 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	count_args(char **nums)
{
	int	count;

	count = 0;
	while (nums[count])
		count++;
	return (count);
}

static void	execute_operation(char **line, t_stack **a, t_stack **b)
{
	int	i;

	i = 0;
	if (!line)
		return ;
	while (line[i])
	{
		handle_swap_operations(line[i], a, b);
		handle_rotate_operations(line[i], a, b);
		handle_reverse_rotate_operations(line[i], a, b);
		handle_push_operations(line[i], a, b);
		if (!is_valid_operation(line[i]))
		{
			write(2, "ERROR\n", 6);
			exit(1);
		}
		i++;
	}
}

static char	**read_operations(void)
{
	int		capacity;
	char	**line;
	char	*read_line;
	int		i;
	char	**tmp;

	capacity = 10;
	i = 0;
	line = malloc(sizeof(char *) * capacity);
	if (!line)
		return (NULL);
	read_line = get_next_line(0);
	while (read_line)
	{
		if (i >= capacity - 1)
		{
			tmp = reallocate_line(line, i, &capacity);
			if (!tmp)
				return (NULL);
			line = tmp;
		}
		line[i++] = read_line;
		read_line = get_next_line(0);
	}
	return (line[i] = NULL, line);
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

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	char	**operations;

	if (argc < 2)
		return (0);
	if (empty_string_check(argv, argc) == 1)
		return (write(1, "ERROR\n", 6), 1);
	argv = splitter_joinner(argv, argc);
	argc = count_args(argv);
	if (pars(argv, argc) == 1)
		return (write(1, "ERROR\n", 6), argv_free(argv), 1);
	a = init_stack(argv, argc);
	if (dup_checker(&a) == 1)
		return (write(1, "ERROR\n", 6), argv_free(argv), free_list(&a), 1);
	if (ifsorted(&a) == 1)
		return (free_list(&a), argv_free(argv), 0);
	argv_free(argv);
	operations = read_operations();
	execute_operation(operations, &a, &b);
	if (ifsorted(&a) == 1)
		return (write(1, "OK\n", 3), last_free(&a, operations), 0);
	else if (ifsorted(&a) == 0)
		return (write(1, "KO\n", 3), last_free(&a, operations), 0);
}
