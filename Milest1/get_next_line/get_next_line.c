/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brportos <brportos@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 12:56:40 by brportos          #+#    #+#             */
/*   Updated: 2026/02/28 09:18:26 by brportos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (NULL);
	if (len > (ft_strlen(s) - start))
		len = (ft_strlen(s) - start);
	sub = malloc(sizeof * sub * (len + 1));
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	return (sub);
}

static char	*ft_read_and_concatenating(int fd, char *tmp)
{
	char	*buf;
	char	*keep_tmp;
	ssize_t	size;

	size = 1;
	if (!tmp)
		tmp = ft_strdup("");
	buf = malloc(BUFFER_SIZE + 1);
	if (!buf)
		return (NULL);
	while (!ft_strchr(tmp, '\n') && size > 0)
	{
		size = read(fd, buf, BUFFER_SIZE);
		if (size == -1)
			return (free(tmp), free(buf), NULL);
		buf[size] = '\0';
		keep_tmp = tmp;
		tmp = ft_strjoin(keep_tmp, buf);
		free(keep_tmp);
	}
	return (free(buf), tmp);
}

static char	*line_extraction(char *tmp)
{
	int		i;
	char	*line;

	i = 0;
	if (!tmp[i])
		return (NULL);
	while (tmp[i] && tmp[i] != '\n')
		i++;
	line = ft_substr(tmp, 0, i + (tmp[i] == '\n'));
	return (line);
}

static char	*updating_line(char *tmp)
{
	char	*keep_tmp;
	int		i;

	i = 0;
	while (tmp[i] && tmp[i] != '\n')
		i++;
	if (!tmp[i])
	{
		free(tmp);
		tmp = NULL;
		return (NULL);
	}
	keep_tmp = ft_substr(tmp, i + 1, ft_strlen(tmp) - i);
	free(tmp);
	tmp = NULL;
	return (keep_tmp);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*tmp;

	if (fd < 0 && BUFFER_SIZE <= 0)
		return (NULL);
	tmp = ft_read_and_concatenating(fd, tmp);
	if (!tmp)
		return (NULL);
	line = line_extraction(tmp);
	tmp = updating_line(tmp);
	return (line);
}
