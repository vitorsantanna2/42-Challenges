/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:48:26 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/05 23:16:03 by andde-so         ###   ########.fr       */
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
