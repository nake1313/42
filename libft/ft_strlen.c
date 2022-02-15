/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:40:16 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:40:16 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *arg)
{
	size_t	i;

	i = 0;
	while (arg[i])
	{
		i++;
	}
	return (i);
}

// int main()
// {
// 	char *str = "ahmet can fakili";
// 	printf("%u", ft_strlen(str));
// }
