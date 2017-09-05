
#include "libft.h"
#include <stdio.h>

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	len;

	len = ft_strlen(s1);
	while ((*(s1 + len++) = *s2++))
	{
	//	printf("### s1 = %d\t ### s2 = %d\n ", **s1, **s2);
		;
	}
//	printf("ft_dest len = %d\n", ft_strlen(s1));
	return (s1);
}
