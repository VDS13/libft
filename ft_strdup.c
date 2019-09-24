/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 16:23:26 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/07 14:50:30 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *dest;

	if (!(dest = (char *)malloc(sizeof(*dest) * (ft_strlen(src) + 1))))
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
