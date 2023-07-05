#include "../includes/rush.h"

int	mini_atoi(char num)
{
	int	n;

	n = num - 48;
	return (n);
}

void	free_matrix(int **square)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(square[i]);
		i++;
	}
	free(square);
}
