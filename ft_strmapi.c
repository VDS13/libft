/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:45:20 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/07 17:00:42 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s,
		char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	if (s != NULL && f != NULL)
	{
		dest = ft_strnew(ft_strlen(s));
		if (dest != NULL)
		{
			while (s[i] != '\0')
			{
				dest[i] = f(i, s[i]);
				i++;
			}
			return (dest);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
