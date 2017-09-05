/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 11:03:45 by wkhosa            #+#    #+#             */
/*   Updated: 2017/08/17 11:17:07 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*start;
	char	*end;
	size_t	size;

	end = ft_strchr(big, '\0');
//	start = ft_strchr(big, *little);
	start = (char *)big;
	size = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	if (start == NULL)
		return (NULL);
	while (start != end && size < len)
	{
		if (ft_strncmp(little, start, ft_strlen(little)) == 0)
			return (start);
		start++;
		size++;
	}
	return NULL;
}
