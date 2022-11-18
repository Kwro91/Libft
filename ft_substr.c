/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:51:15 by besalort          #+#    #+#             */
/*   Updated: 2022/11/18 13:47:29 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tab;

	i = 0;
	if (start > ft_strlen(s) + 1)
	{
		tab = malloc(1);
		if (!tab)
			return (NULL);
		tab[0] = '\0';
		return (tab);
	}
	if (ft_strlen(&s[start]) <= len)
		tab = malloc(sizeof(char) * ft_strlen(&s[start]) + 1);
	else
		tab = malloc(len + 1);
	if (!tab)
		return (NULL);
	while (i < len && s[start])
		tab[i++] = s[start++];
	tab[i] = '\0';
	return (tab);
}
/*
int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%s",ft_substr(av[1], ft_atoi(av[2]), ft_strlen(av[1])));
	}
}
*/