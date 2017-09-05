/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 12:03:15 by wkhosa            #+#    #+#             */
/*   Updated: 2017/07/17 15:54:21 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	index;
	size_t	len;

	index = 0;
	len = ft_strlen(s);
	while (index++ <= len)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (NULL);
}

/*
int strCmp( const char *s1, const char *s2 )
{	
	const unsigned char *p1 = ( const unsigned char * )s1;
	const unsigned char *p2 = ( const unsigned char * )s2;

	while ( *p1 && *p1 == *p2 )
		++p1, ++p2;

	return ( *p1 > *p2 ) - ( *p2  > *p1 );
}
*/
