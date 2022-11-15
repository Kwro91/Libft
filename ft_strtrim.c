/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:35:15 by besalort          #+#    #+#             */
/*   Updated: 2022/11/14 17:34:08 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*tab;

	i = 0;
	j = ft_strlen((char *)s1);
	if (!s1 || !set)
		return (NULL);
	while(s1[i] && strchr(set, s1[i]))
		i++;
	while(s1[j] && strchr(set, s1[j]))
		j--;
	tab = malloc(sizeof(char) * j - i);
	if(!tab)
		return (0);
	tab = ft_substr(s1, i, j-i);
	return (tab);
}
/*
int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("String originale : %s\nNouvelle String : %s", av[1], ft_strtrim(av[1], av[2]));
	}
}
*/