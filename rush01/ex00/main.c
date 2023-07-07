/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 21:47:21 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/05 23:40:39 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int	main(int argc, const char **argv)
{
	int	*borders;

	if (argc != 2)
		return (put_error(), 1);
	borders = parse_arg(argv[1]);
	if (!borders)
		return (put_error(), 2);
	solve_skycraper(borders);
	free(borders);
}
