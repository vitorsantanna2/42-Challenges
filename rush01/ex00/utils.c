/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:48:26 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/06 21:40:11 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

void	put_char(char c)
{
	write(STDOUT_FILENO, &c, sizeof(char));
}

void	put_error(void)
{
	write(STDERR_FILENO, "Error\n", 6);
}

int	mini_atoi(char c)
{
	return (c - '0');
}

void	mini_put_nbr(int n)
{
	char	c;

	c = n + '0';
	put_char(c);
}

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
