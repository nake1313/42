/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:40:39 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:40:39 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char *p;

	p = s;
	s += ft_strlen(s);
	while (s - p >= 0)
	{
		if (*s == (char)c)
			return ((char *)s);
	s--;
	}
	return (NULL);
}

// int main()
// {
// 	char *str = "ahmet can fakili";
// 	int c = 'f';
// 	printf("%s", ft_strrchr(str, c));
// }
