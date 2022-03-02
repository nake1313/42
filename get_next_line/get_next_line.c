/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 02:22:17 by nkerioz           #+#    #+#             */
/*   Updated: 2022/03/02 21:20:40 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_get_line(char *save)
{
	char	*s;
	char	*p;

	if (!*save)
		return (NULL);
	p = save;
	while (*save != '\n' && *save)
		save++;
	if (*save == '\n')
		save++;
	s = ft_substr(p, 0, save - p);
	return (s);
}

static char	*ft_save(char *save)
{
	char	*s;
	char	*p;

	if (!*save)
	{
		free(save);
		return (NULL);
	}
	p = save;
	while (*save && *save != '\n')
		save++;
	if (*save == '\n')
		save++;
	s = ft_strdup(save);
	free(p);
	return (s);
}

static char	*ft_read_and_save(int fd, char *save)
{
	char	*buff;
	int		read_bytes;
	char	*tmp;

	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	read_bytes = 1;
	while (!ft_strchr(save, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[read_bytes] = '\0';
		tmp = save;
		save = ft_strjoin(save, buff);
		free(tmp);
	}
	free(buff);
	return (save);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*save;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	save = ft_read_and_save(fd, save);
	if (!save)
		return (NULL);
	line = ft_get_line(save);
	save = ft_save(save);
	return (line);
}
/*
#include <stdio.h>
#include <fcntl.h>
int   main()
{
  int   fd;
  char *c;

  fd = open("test.txt", O_RDWR);
  c = get_next_line(fd);
    printf("%s",c);
	free(c);
	c = get_next_line(fd);
	printf("%s",c);
  //system("leaks a.out"); //   For checking leaks
}
*/
