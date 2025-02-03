/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makkach <makkach@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:06:29 by makkach           #+#    #+#             */
/*   Updated: 2025/02/03 11:18:54 by makkach          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static char	*init_buffer(char **buffer, char *left)
{
	*buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (!*buffer)
		return (free(left), NULL);
	if (!left)
	{
		left = malloc(1);
		if (!left)
			return (free(*buffer), (NULL));
		left[0] = '\0';
	}
	return (left);
}

static char	*extract_line(int fd, char *left)
{
	ssize_t	reads;
	char	*buffer;
	char	*tmp;

	left = init_buffer(&buffer, left);
	if (!left)
		return (NULL);
	reads = 1;
	while (reads > 0)
	{
		reads = read(fd, buffer, BUFFER_SIZE);
		if (reads < 0)
			return (free(left), free(buffer), NULL);
		buffer[reads] = '\0';
		tmp = left;
		left = ft_strjoin(left, buffer);
		if (!left)
			return (free(buffer), free(tmp), NULL);
		free(tmp);
		if (ft_strchr(left, '\n'))
			break ;
	}
	return (free(buffer), left);
}

static char	*filter(char **left)
{
	char	*line;
	char	*tmp;
	char	*i;

	if (!*left)
		return (NULL);
	if (!**left)
		return (free(*left), *left = NULL, NULL);
	i = ft_strchr(*left, '\n');
	if (!i)
	{
		line = ft_strdup(*left);
		if (!line)
			return (NULL);
		return (free(*left), *left = NULL, line);
	}
	line = ft_substr(*left, 0, i + 1 - *left);
	if (!line)
		return (NULL);
	tmp = *left;
	*left = ft_strdup(i + 1);
	free(tmp);
	if (!*left)
		return (free(line), NULL);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*left;
	char		*line;

	if (BUFFER_SIZE <= 0 || BUFFER_SIZE > 2147483647)
		return (NULL);
	if (read(fd, 0, 0) < 0)
		return (free(left), left = NULL, NULL);
	line = NULL;
	left = extract_line(fd, left);
	if (!left)
		return (NULL);
	line = filter(&left);
	if (!line || !*line)
	{
		return (free(left), left = NULL, NULL);
	}
	return (line);
}
