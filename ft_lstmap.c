/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besalort <besalort@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:15:54 by besalort          #+#    #+#             */
/*   Updated: 2022/11/21 16:36:29 by besalort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	size_t	i;

	i = 0;
	ft_lstiter(lst, (void *)f);
	newlst = lst;
	while (i < ft_lstsize(lst))
	{
		newlst = ft_lstnew(newlst->content);
			if (!newlst)
			{
				while (newlst->next)
				{
					ft_lstdelone(*newlst, del);
					newlst = newlst->next;
				}
		return (NULL);	
		newlst = newlst->next;
		lst = lst->next;
		i++;
	}
	}
	newlst = &lst;
	return (*newlst);
}
