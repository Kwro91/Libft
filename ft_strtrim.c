/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:35:15 by besalort          #+#    #+#             */
/*   Updated: 2022/11/18 15:35:11 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*tab;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && isset(s1[i], set))
		i++;
	while (j - 1 > i && isset(s1[j - 1], set))
		j--;
	tab = ft_substr(s1, i, j - i);
	return (tab);
}
/*
int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("String originale : %s\nNouvelle String : %s", av[1], 
		ft_strtrim(av[1], av[2]));
	}
}
*/