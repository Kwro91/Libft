/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:47:14 by besalort          #+#    #+#             */
/*   Updated: 2022/11/09 14:47:14 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *src, const char *to_find, size_t len)
{
	int	i;
	int	j;

	i = 0;
	while (src[i] && i < len)
	{
		j = 0;
		while (src[i + j] == to_find[j] && src[i + j] != '\0' && to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&src[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}