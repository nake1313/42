/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:35:55 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:35:55 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	return ((arg >= 'a' && arg <= 'z')
		|| (arg >= 'A' && arg <= 'Z') || (arg >= '0' && arg <= '9'));
}

// int main()
// {
// 	char a, b;
// 	a = 'A';
// 	b = '3';
// 	printf("%d", ft_isalnum(a));
// 	printf("\n%d", ft_isalnum(b));
// }
