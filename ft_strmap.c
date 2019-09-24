/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 15:38:33 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/07 16:58:56 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	int		i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		dest = ft_strnew(ft_strlen(s));
		if (dest != NULL)
		{
			while (s[i] != '\0')
			{
				dest[i] = f(s[i]);
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
