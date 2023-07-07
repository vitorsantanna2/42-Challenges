/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsantann <jsantann@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 02:18:54 by jsantann          #+#    #+#             */
/*   Updated: 2022/08/18 02:18:57 by jsantann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*allocate;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	size *= count;
	allocate = malloc(size * sizeof(char));
	if (!(allocate))
		return (NULL);
	ft_bzero(allocate, (size));
	return (allocate);
}
