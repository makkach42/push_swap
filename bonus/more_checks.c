/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_checks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:53:07 by makkach           #+#    #+#             */
/*   Updated: 2025/02/03 15:43:22 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	dup_checker(t_stack **c)
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

int	ft_strncmp(char *str1, char *str2, size_t n)
{
	size_t			i;
	unsigned char	*str11;
	unsigned char	*str22;

	i = 0;
	str11 = (unsigned char *)str1;
	str22 = (unsigned char *)str2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (str11[i] == '\0' || str22[i] == '\0')
		{
			return ((str11[i] - str22[i]));
		}
		if (str11[i] != str22[i])
			return (str11[i] - str22[i]);
		i++;
	}
	return (0);
}
