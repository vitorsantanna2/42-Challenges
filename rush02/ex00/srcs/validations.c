#include "rush02.h"

int	ft_isdigit(char *c)
{
	int	i;

	i = -1;
	while (c[++i])
	{
		if (c[i] < 48 || c[i] > 57)
			return (-1);
	}
	return (is_positive(ft_atoi(c)));
}

int	is_positive(int num)
{
	if (num < 0)
		return (-1);
	return (num);
}
