/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:03:12 by besalort          #+#    #+#             */
/*   Updated: 2022/11/14 16:50:46 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*new_s1;
	char	*new_s2;

	if (n == 0)
		return (0);
	new_s1 = (char *)s1;
	new_s2 = (char *)s2;
	return (ft_strncmp(new_s1, new_s2, n));
}
