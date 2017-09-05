
#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*start;
	char	*end;

	end = ft_strchr(big, '\0');
	start = ft_strchr(big, *little);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	if (start == NULL)
		return (NULL);
	while (start != end)
	{
		if (ft_strncmp(little, start, ft_strlen(little)) == 0)
			return (start);
		start++;
	}
	return NULL;
}
