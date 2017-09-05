/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 10:37:09 by wkhosa            #+#    #+#             */
/*   Updated: 2017/07/28 12:31:09 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (((unsigned int)s1[i] == (unsigned int)s2[i]) && (s1[i] != '\0'))
		i++;
	if (((unsigned int)s1[i] > (unsigned int)s2[i]) )
		return (1);
	else if (((unsigned int)s1[i] < (unsigned int)s2[i]) )
		return (-1);
	else
		return (0);
}
