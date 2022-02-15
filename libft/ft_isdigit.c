/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:21 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:36:21 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int arg)
{
	return (arg >= '0' && arg <= '9');
}

// int main()
// {
// 	char a = '5';
// 	char b = 'x';
// 	printf("%d", ft_isdigit(a));
// 	printf("\n%d", ft_isdigit(b));
// }
