/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_skycraper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 23:19:26 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/06 21:38:00 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	is_valid_num(int matrix[N][N], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < N)
	{
		if (matrix[row][i] == num || matrix[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	find_skycraper(int matrix[N][N], int row, int col, int *boarders)
{
	int	num;

	if (row == N)
	{
		if (is_all_cols_valid(matrix, boarders))
			return (print_matrix(matrix), 1);
		return (0);
	}
	if (col == N)
		return ((is_valid_row_col(matrix[row], boarders[(N * 2) + row],
					boarders[(N * 2) + row + N]))
			&& (find_skycraper(matrix, row + 1, 0, boarders)));
	num = 0;
	while (++num <= N)
	{
		if (is_valid_num(matrix, row, col, num))
		{
			matrix[row][col] = num;
			if (find_skycraper(matrix, row, col + 1, boarders))
				return (1);
			matrix[row][col] = 0;
		}
	}
	return (0);
}

int	solve_skycraper(int *boarders)
{
	int	matrix[N][N];
	int	i;
	int	j;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			matrix[i][j] = 0;
			j++;
		}
		i++;
	}
	find_skycraper(matrix, 0, 0, boarders);
	return (1);
}
