/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:55:06 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/07 23:33:03 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char **argv)
{
	int				fd;
	long long		nbr;

	if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		nbr = is_digit(argv[2]);
	}
	else if (argc == 2)
	{
		fd = open("numbers.dict", O_RDONLY);
		if (fd == -1)
			return (2);
		nbr = is_digit(argv[1]);
	}
	else
		return (print_error(), 3);
	if (nbr < 0)
		return (print_error(), 4);
	create_list(fd, nbr);
	return (0);
}
