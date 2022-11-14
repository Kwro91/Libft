/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:27:13 by besalort          #+#    #+#             */
/*   Updated: 2022/11/14 16:50:21 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	if (ft_strlen(dest) + 1 < size)
		return (ft_strlen(src) + size);
	while (src)
		dest++ = src++;
	dest = '/0';
	return (ft_strlen(src));
}
