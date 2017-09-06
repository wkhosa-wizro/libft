/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 13:34:44 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/06 14:04:35 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(long value)
{
	int		len;
	int		sign;

	sign = 0;
	len = 0;
	if (value < 0)
		sign++;
	while (value)
	{
		value /= 10;
		len++;
	}
	return (len + sign);
}

char	*ft_itoa(int n)
{
	char	*snbr;
	int		len;
	int		sign;
	long	value;

	value = (long)n;
	sign = 0;
	len = ft_nbrlen(value);
	if (!(snbr = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (value < 0)
	{
		value = -value;
		sign++;
	}
	if (value > 2147483648)
	{
		ft_strcpy(snbr, "-2147483648");
		return (snbr);
	}
	while (len--)
	{
		snbr[len] = value % 10 + '0';
		value /= 10;
	}
	if (sign)
		snbr[0] = '-';
	return (snbr);
}
