#include "../includes/rush.h"
#include <stdio.h>

int	check_template(int **matrix, int i)
{
	int	j;
	int	stop;

	stop = 0;
	while (i < 4 && stop == 0)
	{
		if (i == 0 || i == 2)
		{
			j = 0;
			while (j < 4 && stop == 0)
			{
				if (matrix[i][j] == 1 && matrix[i + 1][j] == 1)
					stop = 1;
				else if (matrix[i][j] == 3 && matrix[i + 1][j] == 3)
					stop = 1;
				else if (matrix[i][j] == 4 && matrix[i + 1][j] != 1)
					stop = 1;
				else if (matrix[i][j] != 1 && matrix[i + 1][j] == 4)
					stop = 1;
				j++;
			}
		}
		i++;
	}
	return (stop);
}
