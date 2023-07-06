/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 22:04:29 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/06 00:16:40 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	*parse_arg(const char *arg)
{
	int	i;
	int	j;
	int	len;
	int	*borders;

	len = str_len((char *)arg);
	if (len != (N * 4) + (N * 4) - 1)
		return (NULL);
	borders = malloc(sizeof(int) * N * 4);
	if (!borders)
		return (NULL);
	j = 0;
	i = 0;
	while (i < len)
	{
		if (arg[i] >= '1' && arg[i] <= N + '0')
			borders[j++] = mini_atoi(arg[i]);
		else
			return (free(borders), NULL);
		if (arg[++i] && arg[i] != ' ')
			return (free(borders), NULL);
		i++;
	}
	return (borders);
}
