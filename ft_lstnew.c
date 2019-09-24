/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 15:15:03 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/12 18:44:01 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_listnull(t_list *list)
{
	free(list);
	return (NULL);
}

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list *list;

	list = (t_list*)malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	if (content == NULL)
	{
		list->content = NULL;
		list->content_size = 0;
	}
	else
	{
		list->content = (void*)malloc(sizeof(content));
		if (list->content != NULL)
		{
			ft_memcpy(list->content, content, content_size);
			list->content_size = content_size;
		}
		else
			return (ft_listnull(list));
	}
	list->next = NULL;
	return (list);
}
