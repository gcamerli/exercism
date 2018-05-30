#include "isogram.h"

int	check_letter(const char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

bool is_isogram(const char phrase[])
{
	int			i;
	int			j;
	const char	*s;

	i = 0;
	j = 0;
	s = phrase;
	while (s[i++] != 0)
	{
		if (check_letter(s[i]) == 1)
		{
			if (s[i] == s[j])
				return (0);
			if (s[i] == s[i + 1])
				return (0);
			if (s[i] == s[j] + 32)
				return (0);
			if (s[i] == s[j] - 32)
				return (0);
		}
	}
	return (1);
}
