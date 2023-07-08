/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_digit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:46:57 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/08 09:29:04 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

long long int	is_digit(char *c)
{
	long long int	i;

	if (ft_strlen(c) >= 13)
		return (-1);
	i = -1;
	while (c[++i])
	{
		if (c[i] < '0' || c[i] > '9')
			return (-1);
	}
	return (ft_atol(c));
}
