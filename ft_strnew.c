/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 14:46:25 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/11 15:41:51 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void	*str;

	if (size == 0)
		str = (char*)malloc(sizeof(*str) * 0);
	str = (char*)malloc(sizeof(*str) * (size + 1));
	if (str == NULL)
		return (NULL);
	ft_memset((void*)str, (int)'\0', size + 1);
	return (str);
}
