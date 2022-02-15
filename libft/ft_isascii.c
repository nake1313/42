/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:14 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:36:14 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int arg)
{
	return (arg >= 0 && arg < 128);
}

// int main()
// {
// 	char a = 2;
// 	char b = '\0';
// 	printf("%d", ft_isascii(a));
// 	printf("\n%d", ft_isascii(b));
// }
