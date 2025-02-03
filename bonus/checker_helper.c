/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_helper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 09:53:18 by makkach           #+#    #+#             */
/*   Updated: 2025/02/03 11:18:26 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

t_stack	*init_stack(char **argv, int count)
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