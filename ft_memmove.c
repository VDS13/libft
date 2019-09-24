/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:17:01 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/10 17:04:05 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	buf[n];

	if (n > 1048576)
		return (NULL);
	if (src == NULL && dst == NULL)
		return (NULL);
	ft_memcpy((void*)buf, src, n);
	ft_memcpy(dst, (void*)buf, n);
	return (dst);
}
