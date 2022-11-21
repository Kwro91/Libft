/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:00:47 by besalort          #+#    #+#             */
/*   Updated: 2022/11/21 16:07:21 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	void	*p;
	t_list	*new;
	
	new = *lst;
	while (new)
	{
		del(ft_lstlast(new));
		free(ft_lstlast(new));
	}
	new->next = NULL;
}