/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:42:45 by besalort          #+#    #+#             */
/*   Updated: 2022/11/09 17:04:06 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = ft_strlen(dest);
	if (size < i + 1)
		return (ft_strlen(src) + size);
	while (src)
		dest[i++] = src++;
	dest[i] = '/0';
	return (ft_strlen(dest));
}
