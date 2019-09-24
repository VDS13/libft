/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 17:39:22 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/10 18:16:05 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	size_t	i;
	size_t	n;
	char	s;

	i = ft_strlen(str);
	n = i - 1;
	i = 0;
	while (i <= n / 2)
	{
		s = str[n - i];
		str[n - i] = str[i];
		str[i] = s;
		i++;
	}
	return (str);
}
