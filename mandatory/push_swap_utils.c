/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:52:42 by makkach           #+#    #+#             */
/*   Updated: 2025/02/07 16:56:02 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**helper(char **argv)
{
	int		i;
	char	**d;
	char	*tmp;
	char	*str;

	i = 2;
	str = ft_strdup(argv[1]);
	while (argv[i] != NULL)
	{
		tmp = str;
		str = ft_strjoin(str, " ");
		free(tmp);
		tmp = str;
		str = ft_strjoin(str, argv[i]);
		free(tmp);
		i++;
	}
	d = ft_split(str, 32);
	free(str);
	return (d);
}

char	**splitter_joinner(char **argv, int argc)
{
	char	**d;

	argc = 0;
	d = helper(argv);
	return (d);
}

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
