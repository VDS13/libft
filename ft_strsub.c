/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:07:40 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/11 18:50:40 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	if (s != NULL)
	{
		dest = ft_strnew(len);
		if (dest != NULL)
		{
			while (s[start] != '\0' && i < (unsigned int)len)
			{
				dest[i] = s[start];
				start++;
				i++;
			}
		}
		else
			return (NULL);
	}
	else
		return (NULL);
	dest[i] = '\0';
	return (dest);
}
