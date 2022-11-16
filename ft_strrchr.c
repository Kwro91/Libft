/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:45:27 by besalort          #+#    #+#             */
/*   Updated: 2022/11/16 12:06:05 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int to_find)
{
	size_t	i;

	i = ft_strlen(str) + 1;
	while (i--)
	{
		if (str[i] == (char)to_find)
			return ((char *)str + i);
	}
	return (NULL);
}
