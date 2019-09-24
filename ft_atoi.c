/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnichol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 12:02:59 by dnichol           #+#    #+#             */
/*   Updated: 2019/09/11 14:26:47 by dnichol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		ft_sum(int i, int m, const char *str)
{
	unsigned long long int	n;
	int						d;

	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10;
		n = n + str[i] - '0';
		i++;
	}
	if (n > 9223372036854775807 && m == 2)
		return (0);
	if (n > 9223372036854775807 && m == 1)
		return (-1);
	d = (int)n;
	if (m == 2)
		n = -n;
	return (n);
}

int				ft_atoi(const char *str)
{
	int i;
	int n;
	int m;

	i = 0;
	m = 0;
	while (str[i] != '\0' && m == 0)
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == '\r')
			i++;
		else if (str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
			i++;
		else
			m = 1;
	}
	if (str[i] == '-')
		m = 2;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
		n = ft_sum(i, m, str);
	else
		n = 0;
	return (n);
}
