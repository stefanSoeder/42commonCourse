/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stemarti <stemarti@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:35:53 by stemarti          #+#    #+#             */
/*   Updated: 2024/12/10 16:06:46 by stemarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_excerpt(int fd, char *load)
{
	int		bytes_read;
	char	*buf;

	bytes_read = 1;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (ft_free(&load));
	buf[0] = '\0';
	while (bytes_read > 0 && !ft_strchr(buf, '\n'))
	{
		bytes_read = read (fd, buf, BUFFER_SIZE);
		if (bytes_read > 0)
		{
			buf[bytes_read] = '\0';
			load = ft_strjoin(load, buf);
		}
	}
	free(buf);
	if (bytes_read == -1)
		return (ft_free(&load));
	return (load);
}

char	*get_new_line(char *load)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(load, '\n');
	len = (ptr - load) + 1;
	line = ft_substr(load, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

char	*store_leftover(char *load)
{
	char	*new_load;
	char	*ptr;
	int		len;

	ptr = ft_strchr(load, '\n');
	if (!ptr)
		return (ft_free(&load));
	len = (ptr - load) + 1;
	if (!load[len])
		return (ft_free(&load));
	new_load = ft_substr(load, len, ft_strlen(load) - len);
	ft_free(&load);
	if (!new_load)
		return (NULL);
	return (new_load);
}

char	*get_next_line(int fd)
{
	static char	*load;
	char		*line;

	if (fd < 0)
		return (NULL);
	if ((load && !ft_strchr(load, '\n')) || !load)
		load = read_excerpt(fd, load);
	if (!load)
		return (NULL);
	line = get_new_line(load);
	if (!line)
		return (ft_free(&load));
	load = store_leftover(load);
	return (line);
}

char	*get_next_line(int fd);
