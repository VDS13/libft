/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:17:26 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/11 16:00:39 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*buf;
	unsigned char	*srcbuf;
	size_t			i;

	i = 0;
	buf = (unsigned char*)dst;
	srcbuf = (unsigned char*)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return (dst);
	while (i < n)
	{
		buf[i] = srcbuf[i];
		i++;
	}
	return (dst);
}
