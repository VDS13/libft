/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 17:53:48 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/11 13:53:30 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(char const *s)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
		i++;
	if (s[i] == '\0')
		return (0);
	return (i);
}

static size_t	ft_finish(char const *s)
{
	size_t i;
	size_t k;

	i = 0;
	k = 0;
	i = ft_strlen(s) - 1;
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
	{
		k++;
		i--;
	}
	return (k);
}

char			*ft_strtrim(char const *s)
{
	int		i;
	int		k;
	int		f;
	char	*dest;

	if (s != NULL)
	{
		k = 0;
		f = ft_strlen(s) - ft_finish(s) - ft_start(s);
		dest = ft_strnew(f);
		if (dest != NULL)
		{
			i = ft_start(s);
			while (k < f)
			{
				dest[k] = s[i];
				i++;
				k++;
			}
			return (dest);
		}
		return (NULL);
	}
	return (NULL);
}
