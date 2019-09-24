/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:24:51 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/11 13:29:55 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;

	if (s1 != NULL && s2 != NULL)
	{
		dest = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (dest != NULL)
		{
			ft_strcat(dest, s1);
			ft_strcat(dest, s2);
			return (dest);
		}
		else
			return (NULL);
	}
	return (NULL);
}
