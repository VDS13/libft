/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:52:28 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/07 14:49:48 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buf;
	size_t			i;

	i = 0;
	buf = (unsigned char*)b;
	while (i < len)
	{
		buf[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
