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
	size_t	len;
	char	*str2;

	len = ft_strlen(str);
	str2 = (char *)malloc(sizeof(char) * (len + 1));
	if (str2 == NULL)
		return (NULL);
	str2[len] = 0;
	while (len--)
		str2[len] = str[len];
	return (str2);
}

// int main()
// {
// 	char *str = "deneme1 deneme2 deneme3";
// 	printf("%s", ft_strdup(str));
// }
