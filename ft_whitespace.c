/* Skip white spaces and return the index of the first char  */

int	ft_whitespace(const char *str)
{
	int	index;
	int	k;
	char	*whitespace;

	whitespace = "\a\b\f\n\r\t\v ";
	index = 0;
	k = 0;
	while (whitespace[k] != '\0')
	{
		if(whitespace[k] == str[index])
		{
			k = 0;
			index++;
		}
		k++;
	}
	return (index);
}

