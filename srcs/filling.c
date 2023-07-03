#include "../includes/rush.h"

void	create_vector(char **argv)
{
	int	**square;

	square = malloc(sizeof(int *) * 4);
	square[COL_UP] = filling_vector(argv, 0, 6);
	square[COL_DOWN] = filling_vector(argv, 8, 14);
	square[ROW_LEFT] = filling_vector(argv, 16, 22);
	square[ROW_RIGHT] = filling_vector(argv, 24, 30);
	print_blank_square(square);
	free_matrix(square);
}

int	*filling_vector(char **argv, int start, int max)
{
	int	*vector;
	int	i;

	i = 0;
	vector = malloc(sizeof(int) * 4);
	while (start <= max)
	{
		vector[i] = mini_atoi(argv[1][start]);
		start = start + 2;
		i++;
	}
	return (vector);
}
