/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 16:07:49 by makkach           #+#    #+#             */
/*   Updated: 2025/02/06 15:20:37 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	countwords(char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			count++;
			in_word = 1;
		}
		s++;
	}
	return (count);
}

static char	*makestrs(char *s, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static int	mktwod(char **split, char *s, char c, int count)
{
	int	start;
	int	i;
	int	j;

	i = 0;
	j = 0;
	start = 0;
	while (s[i] && j < count)
	{
		if (s[i] == c)
		{
			if (i > start)
			{
				split[j] = makestrs(s, start, i);
				if (!split[j++])
					return (0);
			}
			start = i + 1;
		}
		i++;
	}
	if (i > start && j < count)
		split[j++] = makestrs(s, start, i);
	split[j] = NULL;
	return (1);
}

static void	ft_free(char **split, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char *s, char c)
{
	int		count;
	char	**split;

	if (!s)
		return (NULL);
	count = countwords(s, c);
	split = malloc((count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	if (!mktwod(split, s, c, count))
	{
		ft_free(split, count);
		return (NULL);
	}
	return (split);
}
