/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:43:35 by besalort          #+#    #+#             */
/*   Updated: 2022/11/09 16:03:29 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*new_dest;
	char	*new_src;

	i = 0;
	new_dest = (char *)dest;
	new_src = (char *)src;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			new_dest[i] = new_src[i];
			i--;
		}
	}
	else
	{
		while (i < n)
		{
			new_dest[i] = new_src[i];
			i++;
		}
	}
	return (dest);
}
