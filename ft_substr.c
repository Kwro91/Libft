/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:51:15 by besalort          #+#    #+#             */
/*   Updated: 2022/11/16 11:53:31 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tab;

	i = 0;
	if (start > ft_strlen(s))
	{
		tab = malloc(1);
		tab[0] = '\0';
		return (tab);
	}
	tab = malloc(sizeof(char) * ft_strlen(&s[start]));
	if (!tab)
		return (NULL);
	while (start < len && s[start])
		tab[i++] = s[start++];
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