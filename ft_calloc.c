/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:38:18 by besalort          #+#    #+#             */
/*   Updated: 2022/11/23 15:19:52 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	total;

	total = nmemb * size;
	if (size == 0 || nmemb >= SIZE_MAX / size)
		return (NULL);
	tab = malloc(sizeof(void) * total);
	if (!tab)
		return (NULL);
	ft_bzero(tab, total);
	return (tab);
}
