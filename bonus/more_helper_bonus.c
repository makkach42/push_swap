/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_helper_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:51:23 by makkach           #+#    #+#             */
/*   Updated: 2025/02/18 11:43:20 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	free_list(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *a;
	while (tmp)
	{
		tmp2 = tmp;
		tmp = tmp->next;
		free(tmp2);
		tmp2 = NULL;
	}
}

void	argv_free(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	free_operations(char **operations)
{
	int	i;

	i = 0;
	while (operations[i])
	{
		free(operations[i]);
		i++;
	}
	free(operations);
}

void	checker_helper(char **tmp, int i, char **line)
{
	int	j;

	j = 0;
	if (!tmp)
	{
		j = i;
		while (j > 0)
		{
			free(line[--j]);
		}
		free(line);
		return ;
	}
	j = 0;
	while (j < i)
	{
		tmp[j] = line[j];
		j++;
	}
}

void	last_free(t_stack **a, t_stack**b, char **operations)
{
	free_list(a);
	free_list(b);
	free_operations(operations);
}
