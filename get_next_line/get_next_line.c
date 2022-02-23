/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 02:22:17 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/23 03:11:29 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_get_line(char *save)
{
	char	*s;
	char	*p;

	if (!*save)
		return (NULL);
	p = save;
	while (*save != '\n' && *save)
		save++;
	if(*save == '\n')
		save++;
	s = ft_substr(p, 0, save - p);
	return (s);
}

char	*ft_save(char *save)
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
	s = ft_substr(save, 0, ft_strlen(save));
	free(p);
	return (s);
}
char	*ft_sw(char *a, char *b)
{
	char	*tmp;

	tmp = a;
	a = b;
	free(tmp);
	return a;
}

char	*ft_read_and_save(int fd, char *save)
{
	char	*buff;
	int		read_bytes;


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
		if(save == NULL)
		{
			save = malloc(1 * sizeof(char));
			save[0] = '\0';
		}
		save = ft_sw(save,ft_strjoin(save,buff));
	}
	free(buff);
	return (save);
}

char *get_next_line(int fd)
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
  while(c)
  {
    printf("%s",c);
	free(c);
    c = get_next_line(fd);
  }
  system("leaks a.out"); //   For checking leaks
}
*/
