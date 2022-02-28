/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:39:52 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:39:52 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if(!s)
		return ;
	i = 0;
	while (*s)
	{
		f(i++, s++);
	}
}

// void func(unsigned int a, char *b)
// {
// 	printf("\n%d. karakter = %c", a, *b);
// }

// int main()
// {
// 	char *str = "ahmet can deneme1";
// 	ft_striteri(str, func);
// }
