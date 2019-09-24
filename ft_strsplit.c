/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 18:58:58 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/11 19:06:17 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_d(char const *str, char c)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && str[i])
		{
			k++;
			i++;
		}
		else
			i++;
	}
	return (k + 1);
}

static char	**ft_pushnull(char **dest, int j)
{
	ft_freemat(dest, j);
	return (NULL);
}

static char	**ft_splitwhite(char **dest, char const *str, char c)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			k = 0;
			dest[j] = ft_strnew(ft_strlen_d(str, c));
			if (dest[j] == NULL)
				return (ft_pushnull(dest, j));
			while (str[i] != c && str[i])
				dest[j][k++] = str[i++];
			dest[j][k] = '\0';
			j++;
		}
	}
	dest[j] = 0;
	return (dest);
}

char		**ft_strsplit(char const *str, char c)
{
	char	**dest;

	if (str == NULL)
		return (NULL);
	dest = (char**)malloc(sizeof(char*) * ft_wordcount(str, c));
	if (dest == NULL)
		return (NULL);
	ft_splitwhite(dest, str, c);
	if (dest == NULL)
		return (NULL);
	return (dest);
}
