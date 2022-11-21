/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:43:20 by besalort          #+#    #+#             */
/*   Updated: 2022/11/21 14:22:07 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	libere(char **tab, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static int	ft_countword(const char *str, char c)
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

char	*ft_fill(char *src, size_t i, char c)
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
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (0);
	j = 0;
	while (j < count)
	{
		str[j] = src[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

static int	splitnorm(char **tab, char const *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			tab[j] = (char *)ft_fill((char *)str, i, c);
			if (ft_strlen(tab[j]) == 0)
			{
				libere(tab, j);
				return (0);
			}
			j++;
		}
		while (str[i] && str[i] != c)
			i++;
	}
	tab[j] = NULL;
	return (1);
}

char	**ft_split(char const	*str, char c)
{
	char	**tab;

	tab = malloc(sizeof(char *) * (ft_countword(str, c) + 1));
	if (!tab)
		return (NULL);
	if (splitnorm(tab, str, c) == 0)
		return (NULL);
	return (tab);
}
/*
int	main(int ac, char **av)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split(av[1], av[2][0]);
	(void)ac;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	printf("%s\n", tab[i]);
}
*/
