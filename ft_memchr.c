/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:42:13 by besalort          #+#    #+#             */
/*   Updated: 2022/11/14 16:49:57 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int to_find, size_t size)
{
	size_t	i;
	char	*new_src;

	i = 0;
	new_src = (char *)src;
	while (new_src && i < size)
	{
		if (new_src == to_find)
			return ((void *)new_src);
		new_src++;
		i++;
	}
	return (NULL);
}
