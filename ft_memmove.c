/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 17:00:30 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/05 08:22:48 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*s1;
	char	*s2;
	
	s1 = (char *)dest;
	s2 = (char *)src;
	while ((len--) + 1 > 0)
		s1[len] = s2[len];

	return (dest);
}
