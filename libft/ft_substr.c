/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:40:52 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:40:52 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	index;

	if (s == NULL)
		return (NULL);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if ((size_t)start + len > ft_strlen(s))
		len = ft_strlen(s) - (size_t)start;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	index = 0;
	if (dest == NULL)
		return (NULL);
	while (index < len)
	{
		dest[index] = s[index + start];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

// int main()
// {
// 	char *str = "ahmetcanfakili";
// 	printf("%s", ft_substr(str, 5, 10));
// }
