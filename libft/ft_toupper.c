/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:41:27 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:41:27 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int arg)
{
	return (arg - 32 * (arg >= 'a' && arg <= 'z'));
}

// int main()
// {
// 	int a = 'n';
// 	printf("%d", ft_toupper(a));
// }
