/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 10:37:09 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/05 10:24:32 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);

	while (((unsigned int)s1[i] == (unsigned int)s2[i]) && (i < n - 1) && s1[i] != '\0')
		i++;
	if (((unsigned int)s1[i] > (unsigned int)s2[i]))
		return (1);
	else if (((unsigned int)s1[i] < (unsigned int)s2[i]) )
		return (-1);
	else
		return (0);
}
