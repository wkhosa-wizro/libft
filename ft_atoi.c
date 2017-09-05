/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 10:53:52 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/05 16:12:20 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		nbr;
	int		index;
	int		sign;

	nbr = 0;
	sign = 1;
	/* remove first occering white spaces */
	index = ft_whitespace(str);
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -sign;
		index++;		
	}

	while (str[index] >= '0' && str[index] <= '9')
	{
		nbr = (str[index] - '0')  + nbr * 10;
	//	if (nbr >= 2147483648)
	//		return (-2147483648);
		index++;
	}
/*
	if (nbr >= 2147483647)
		nbr = 2147483647;
	if (nbr <= -214743648)
		nbr = -214743648;
*/
	return ((int)nbr * sign);
}
