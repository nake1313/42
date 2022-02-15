/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:07 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:36:07 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int arg)
{
	return ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'));
}

// int main()
// {
// 	char a, b;
// 	a = 'a';
// 	b = '5';
// 	printf("%d", ft_isalpha(a));
// 	printf("\n%d", ft_isalpha(b));
// }
