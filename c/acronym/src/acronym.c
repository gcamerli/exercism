#include "acronym.h"

int		check_space(const char c)
{
	if (c == ' ' || c == '-' || c == '\t')
		return (1);
	else
		return (0);
}

char	*abbreviate(const char *phrase)
{
	int			i;
	int			j;
	const char	*s;
	char		*new;

	i = 1;
	j = 1;
	s = phrase;
	if (s == NULL || strlen(s) == 0)
		return (0);
	new = (char *)malloc(sizeof(char) * strlen(s));
	if (new == NULL)
		return (0);
	new[0] = toupper(s[0]);
	while (s[i] != 0)
	{	
		if (check_space(s[i - 1]) == 1)
		{
			new[j] = toupper(s[i]);
			j++;
		}
		i++;
	}
	new[j] = '\0';
	return (new);
}
