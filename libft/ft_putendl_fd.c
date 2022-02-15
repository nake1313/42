/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:39:16 by nkerioz           #+#    #+#             */
/*   Updated: 2022/02/15 14:39:16 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			write(fd, &s[i++], 1);
		}
		write(fd, "\n", 1);
	}
}

// int main()
// {
// 	char *str;
// 	str = "ahmet can fakili";
// 	ft_putendl_fd(str, 1);
// }
