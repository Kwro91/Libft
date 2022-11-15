/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:43:20 by besalort          #+#    #+#             */
/*   Updated: 2022/11/15 16:43:21 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	libere(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
}

static int	ft_countword(char *str, char c)
{
	int	i;
	int	wd;

	i = 0;
	wd = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			wd++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (wd);
}

char	*ft_fill(char *src, int i, char c, char **tab)
{
	size_t	j;
	size_t	count;
	char	*str;

	j = i;
	count = 0;
	while (src[j] && src[j] != c)
	{
		count++;
		j++;
	}
	str = malloc((sizeof(char) * count) + 1);
	if (!str)
		return (0);
	if (count != ft_strlen(str))
		libere(tab);
	j = 0;
	while (src[i] && src[i] != c)
	{
		str[j] = src[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const	*str, char c)
{
	int		i;
	size_t	j;
	int		wd;
	char	**tab;

	i = 0;
	j = 0;
	wd = ft_countword((char *)str, c);
	tab = malloc(sizeof(char *) * wd + 1);
	if (!tab)
		return (0);
	while (str[i] && wd > 0)
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			tab[j] = ft_fill((char *)str, i, c, tab);
			j++;
		}
		while (str[i] && str[i] != c)
			i++;
	}
	tab[j] = NULL;
	return (tab);
}
/*
int	main(int ac, char **av)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split(av[1], av[2]);
	(void)ac;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}*/
