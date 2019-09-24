/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 15:32:07 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/12 15:34:42 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_charmap(char *tab, size_t length, char (*f)(char))
{
	size_t	i;
	char	*t;

	i = 0;
	t = ft_strnew(length);
	while (i < length)
	{
		t[i] = f(tab[i]);
		i++;
	}
	return (t);
}
