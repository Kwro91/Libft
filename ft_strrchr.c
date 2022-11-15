/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:45:27 by besalort          #+#    #+#             */
/*   Updated: 2022/11/15 14:21:17 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int to_find)
{
	size_t	i;
	char	*last;

	i = 0;
	last = (char *)&str[ft_strlen((char *)str) + 1];
	while (str[i])
	{
		if (str[i] == to_find)
			*last = str[i];
		i++;
	}
	return (last);
}
