/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 15:29:41 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/07 18:17:07 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static	void	ft_stradj(char **s)
{
	size_t	len;

	len = 0;
	while (**s == ' ' || **s == '\n' || **s == '\t')
		*s = *s + len++;
	len = ft_strlen(*s) - 1;
	while ((*(*s + len) == ' ' || *(*s + len)  == '\n' || *(*s + len) == '\t') && len)
		len--;
	*(*s + len) = '\0';
}
*/
char	*ft_strtrim(char const *s)
{
	char	*strim;
	size_t	len;
	int		index;

	if (s == NULL)
		return (NULL);
	if (!(len = ft_strlen(s)))
		return (NULL);
	if (!(strim = ft_strnew(len)))
		return (NULL);
	if (!(ft_strcpy(strim, s)))
		return (NULL);
	index = 0;
	while (*strim == ' ' || *strim == '\t' || *strim == '\n')
		strim++;
	len = ft_strlen(strim) - 1;
	while (strim[len] == ' ' || strim[len] == '\n' || strim[len] == '\t')
		strim[len] = '\0';
	return (strim);
}
