/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 17:39:00 by besalort          #+#    #+#             */
/*   Updated: 2022/11/18 13:14:49 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	f(unsigned int i, char c)
{
	c = 'H';
	return (c);
}
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tab;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	tab = malloc(ft_strlen(s)+1);
	if (!tab)
		return (NULL);
	while (s[i])
	{
		tab[i] = f(i, s[i]);
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
/*
int	main (int ac, char **av)
{
	char (*f_ptr)(unsigned int, char) = &f;
	if (ac == 2)
		printf("Original : %s\nModif : %s", av[1], ft_strmapi(av[1], f_ptr));
}*/