/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:40:46 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:40:46 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char *p;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	p = s1 + ft_strlen(s1) - 1;
	while (p >= s1 && ft_strchr(set, *p))
		p--;
	return (ft_substr(s1, 0, p + 1 - s1));
}

// int main()
// {
// 	char *a = "-";
// 	char *str = "-----ahmet-can-fakili--------";
// 	printf("%s", ft_strtrim(str, a));
// }
