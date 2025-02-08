/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 10:24:52 by makkach           #+#    #+#             */
/*   Updated: 2025/02/08 16:43:12 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	pars(char **argv, int argc)
{
	int	i;

	i = 0;
	if (!argv)
		return (0);
	while (i < argc)
	{
		if (valid(argv[i]) == 0 || range_check(argv[i]) == 0)
			return (1);
		i++;
	}
	return (0);
}

int	valid(char *str)
{
	int	i;

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

int	range_check(char *str)
{
	if (ft_atoi(str) > INT_MAX || ft_atoi(str) < INT_MIN)
	{
		return (0);
	}
	return (1);
}

int	ifsorted(t_stack **a)
{
	t_stack	*current;
	t_stack	*next;
	t_stack	**tmp;

	if (!a || !(*a))
		return (0);
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

int	empty_string_check(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (argv[i] == (void *)0)
			return (1);
		while (argv[i][j] == 32)
			j++;
		if (argv[i][j] == '\0')
			return (1);
		i++;
	}
	return (0);
}
