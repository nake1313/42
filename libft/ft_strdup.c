/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:39:47 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:39:47 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t	size;
	char	*dest;
	char	*p;

	size = ft_strlen(str) + 1;
	dest = (char *)malloc(sizeof(char) * size);
	if (!dest)
		return (NULL);
	p = dest;
	while (size--)
		*p++ = *str++;
	return (dest);
}

// int main()
// {
// 	char *str = "deneme1 deneme2 deneme3";
// 	printf("%s", ft_strdup(str));
// }
