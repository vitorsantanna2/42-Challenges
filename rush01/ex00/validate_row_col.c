/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_row_col.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:33:07 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/06 21:42:48 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

static int	check_from_left(int arr[N], int left)
{
	int	i;
	int	build_count;
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
	return (build_count == left);
}

static int	check_from_right(int arr[N], int right)
{
	int	i;
	int	build_count;
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
	return (build_count == right);
}

static int	*get_col_at_index(int matrix[N][N], int col_index)
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

int	is_valid_row_col(int arr[N], int left, int right)
{
	return (check_from_left(arr, left)
		&& check_from_right(arr, right));
}

int	is_all_cols_valid(int matrix[N][N], int *borders)
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
