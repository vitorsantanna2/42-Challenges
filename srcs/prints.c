#include "../includes/rush.h"
#include <stdio.h>

void	print_col(int i, int **matrix)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (j == 0)
			printf(" %i ", matrix[i][j]);
		else
			printf("%i ", matrix[i][j]);
		j++;
	}
}

void	print_rows(int **matrix)
{
	int	i;
	int	j;
	int	l;
	int	r;

	i = 0;
	j = 0;
	l = 0;
	r = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 10)
		{
			if (j == 0)
				printf("%i", matrix[2][l++]);
			else if (j == 9)
				printf("%i", matrix[3][r++]);
			else
				printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
}

void	print_blank_square(int **matrix)
{
	print_col(0, matrix);
	printf("\n");
	print_rows(matrix);
	print_col(1, matrix);
	printf("\n");
}
