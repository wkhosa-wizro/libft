/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkhosa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 20:03:09 by wkhosa            #+#    #+#             */
/*   Updated: 2017/09/07 22:08:16 by wkhosa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_count_words(char *s, char c)
{
	size_t	nbr_words;
	int		flag;

	nbr_words = 0;
	while (*s != '\0')
	{
		flag = 0;
		while (*s != c )
		{
			flag++;
			if (flag == 1)
				nbr_words++;
			s++;
		}
		if (flag == 0)
			s++;
	}
	return (nbr_words);
}

static	char	*get_word(char **s, char c)
{
	char	*word;
	char	*temp;
	size_t	len;

	len = 0;
	while (**s == c && **s != '\0')
		(*s)++;
	temp = ft_strchr(*s, (int)c);
	len = temp - (*s);
	if (!(word = ft_strnew(len)))
		return (NULL);
	ft_strncpy(word, *s, len);
	s  = s + len;
	return (word);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**arry;
	char	*temp;
	size_t	arrylen;
	int		index;

	temp = (char *)s;
	arrylen = ft_count_words(temp, c);
	if (!(arry = (char **)malloc(sizeof(char) * arrylen + 1)))
		return (NULL);
	arry[arrylen] = NULL;
	index = 0;
	while (arrylen--)
		arry[index++] = get_word(&temp, c);
	return (arry);
}
