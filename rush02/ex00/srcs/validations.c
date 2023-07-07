#include "rush02.h"

long long int	ft_isdigit(char *c)
{
	long long int	i;

	i = -1;
	while (c[++i])
	{
		if (c[i] < 48 || c[i] > 57)
			return (-1);
	}
	return (is_positive(ft_atol(c)));
}

long long int	is_positive(long long int num)
{
	if (num < 0)
		return (-1);
	return (num);
}
