/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkerioz <kerioznazmi46@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:39:35 by nkerioz           #+#    #+#             */
/*   Updated: 2022/03/01 01:40:46 by nkerioz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if(*str != c && (*(str + 1) == c || *(str + 1) == '\0'))
		i++;
		str++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	index;
	size_t	i;
	char	**split;
	char	**p;

	if(!s)
		return (0);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	p = split;
	i = 0;
	while (s[i] != '\0')
	{
		while(s[i] == c && s[i] != '\0')
		i++;
		index = i;
		while(s[i] != c && s[i] != '\0')
		i++;
		if(i > index)
		*p++ = ft_substr(s, index, i - index);
	}
	*p = 0;
	return (split);
}
/*
#include <stdio.h>

int main()
{
	char *str = "ahmetcanfakili";
	char karakter = 'a';
	char **sp;
	sp = ft_split(str, karakter);
	printf("%s,%s,%s", sp[0], sp[1], sp[2]);
}
*/
