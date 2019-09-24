/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 09:20:51 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/10 18:58:05 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_lim(int n)
{
	size_t	i;
	int		m;
	char	*dest;

	m = n;
	i = 0;
	while (m != 0)
	{
		i++;
		m = m / 10;
	}
	dest = ft_strnew(i + 1);
	if (dest == NULL)
		return (NULL);
	n = n + 1;
	while (m < (int)i)
	{
		dest[m] = -(n) % 10 + '0';
		n = n / 10;
		m++;
	}
	dest[0] = '8';
	dest[m] = '-';
	return (ft_strrev(dest));
}

static char	*ft_pos(int n)
{
	size_t	i;
	int		m;
	char	*dest;

	m = n;
	i = 0;
	while (m != 0)
	{
		i++;
		m = m / 10;
	}
	dest = ft_strnew(i);
	if (dest == NULL)
		return (NULL);
	while (m < (int)i)
	{
		dest[m] = n % 10 + '0';
		n = n / 10;
		m++;
	}
	return (ft_strrev(dest));
}

static char	*ft_neg(int n)
{
	size_t	i;
	int		m;
	char	*dest;

	m = n;
	i = 0;
	while (m != 0)
	{
		i++;
		m = m / 10;
	}
	dest = ft_strnew(i + 1);
	if (dest == NULL)
		return (NULL);
	while (m < (int)i)
	{
		dest[m] = -(n) % 10 + '0';
		n = n / 10;
		m++;
	}
	dest[m] = '-';
	return (ft_strrev(dest));
}

char		*ft_itoa(int n)
{
	char	*dest;

	if (n == -2147483648)
		dest = ft_lim(n);
	else if (n > 0)
		dest = ft_pos(n);
	else if (n < 0)
		dest = ft_neg(n);
	else
	{
		dest = ft_strnew(1);
		dest[0] = '0';
	}
	return (dest);
}
