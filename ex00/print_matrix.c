/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:44:35 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/05 22:05:18 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	print_matrix(int matrix[N][N])
{
	int	i;
	int	j;

	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			mini_put_nbr(matrix[i][j]);
			if (j != N - 1)
				put_char(' ');
			j++;
		}
		put_char('\n');
		i++;
	}
}
