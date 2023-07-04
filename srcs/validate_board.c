/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_board.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:33:07 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/04 08:37:06 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define N 4

int	check_from_right(int arr[N], int right)
{
	int	build_count;
	int	i;
	int	tallest_build;

	build_count = 1;
	tallest_build = arr[0];
	i = 0;
	while (i < N)
	{
		if (arr[i] > tallest_build)
		{
			build_count++;
			tallest_build = arr[i];
		}
		i++;
	}
	return (build_count == right);
}

int	check_from_left(int arr[N], int left)
{
	int	build_count;
	int	i;
	int	tallest_build;

	build_count = 1;
	tallest_build = arr[N - 1];
	i = N - 1;
	while (i >= 0)
	{
		if (arr[i] > tallest_build)
		{
			build_count++;
			tallest_build = arr[i];
		}
		i--;
	}
	return (build_count == left);
}

int	is_valid_row_col(int arr[N], int right, int left)
{
	return (check_from_right(arr, right)
		&& check_from_left(arr, left));
}

int	is_all_rows_valid(int matrix[N][N], int borders[N * 4])
{
	int	i;
	int	j;

	i = 0;
	j = N * 2; //[8]  row1left
	while (i < N)
	{
		// borders[j + N] = [12] row1right
		if (is_valid_row_col(matrix[i], borders[j], borders[j + N]) == 0)
			return (0);
		i++;
		j++;
	}
	return (1);
}

int	*get_col_at_index(int matrix[N][N], int col_index)
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * N);
	if (!arr || col_index > N)
		return (NULL);
	i = 0;
	while (i < N)
	{
		arr[i] = matrix[i][col_index];
		i++;
	}
	return (arr);
}

int	is_all_cols_valid(int matrix[N][N], int borders[N * 4])
{
	int	i;
	int	*arr;

	i = 0;
	while (i < N)
	{
		arr = get_col_at_index(matrix, i);
		if (!arr || is_valid_row_col(arr, borders[i], borders[i + N]) == 0)
			return (0);
		free(arr);
		i++;
	}
	return (1);
}

int	is_valid_matrix(int matrix[N][N], int borders[N * 4])
{
	return (is_all_rows_valid(matrix, borders)
		&& is_all_cols_valid(matrix, borders));
}

/*
int main(const int argc, const char **argv)
{
	int arr[N] = {1, 3, 4, 2};

	//  [0]  col1up
	//  [1]  col2up
	//  [2]  col3up
	//  [3]  col4up
	//  [4]  col1down
	//  [5]  col2down
	//  [6]  col3down
	//  [7]  col4down
	//  [8]  row1left
	//  [9]  row2left
	//  [10] row3left
	//  [11] row4left
	//  [12] row1right
	//  [13] row2right
	//  [14] row3right
	//  [15] row4right


	int boarders[N * 4]  = {4, 3, 2, 1, 1, 2, 2, 2, 4, 3, 2, 1, 1, 2, 2, 2};
	int matrix[N][N] =
	{
		{1, 2, 3, 4},
		{2, 3, 4, 1},
		{3, 4, 1, 2},
		{4, 1, 2, 3},
	};

	printf("is valid: %d\n", is_valid_matrix(matrix, boarders));
	return (0);
}
*/
