/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 17:34:00 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/12 15:09:14 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *list;
	t_list *temp;

	if (!lst || !f)
		return (NULL);
	list = f(lst);
	temp = list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(list->next = f(lst)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (temp);
}
