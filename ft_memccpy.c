/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 12:32:48 by wkhosa            #+#    #+#             */
/*   Updated: 2017/08/30 16:45:42 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned	char	*d;
	unsigned	char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n-- > 0 && (unsigned char)c != *s)
	{
		*d++ = *s++;
	}
	if (*s == (unsigned char)c)
	{
		*d++ = *s;
		return (d);
	}
	else
		return (NULL);
}
