/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 02:22:32 by nkerioz           #+#    #+#             */
/*   Updated: 2022/03/02 21:21:33 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	const char	*p;

	p = s;
	while (*s)
		s++;
	return (s - p);
}

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str++)
	{
		if (*str == (char)c)
			return ((char *)str);
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	char	*p;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (NULL);
	p = dest;
	while (*s1)
		*p++ = *s1++;
	while (*s2)
		*p++ = *s2++;
	*p = 0;
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	char	*p;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start + len > size)
		len = size - start;
	if (start > size)
		len = 0;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	p = dest;
	while (len--)
		*dest++ = *(s + start++);
	*dest = '\0';
	return (p);
}

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*dest;
	char	*p;

	if (!str)
		return (NULL);
	size = ft_strlen(str) + 1;
	dest = (char *)malloc(sizeof(char) * size);
	if (!dest)
		return (NULL);
	p = dest;
	while (size-- > 0)
		*p++ = *str++;
	return (dest);
}
