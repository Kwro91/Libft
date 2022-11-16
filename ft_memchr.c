/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:42:13 by besalort          #+#    #+#             */
/*   Updated: 2022/11/16 12:50:38 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int to_find, size_t size)
{
	size_t	i;
	char	*new_src;

	i = 0;
	new_src = (char *)src;
	while (new_src[i] && i < size)
	{
		if (new_src[i] == to_find)
			return ((void *)new_src + i);
		i++;
	}
	return (NULL);
}
