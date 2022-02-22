/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:40:34 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:40:34 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t j;

	if (!*little)
		return ((char *)big);
	j = ft_strlen(little);
	while (*big != '\0' && len-- >= j)
	{
		i = 0;
		while (little[i] == big[i])
		{
			i++;
			if (little[i] == '\0')
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}

// int main()
// {
// 	char *s = "ahmet can fakili";
// 	char * s2 = "can";
// 	size_t i = 10;
// 	printf("%s", ft_strnstr(s, s2, i));
// }
