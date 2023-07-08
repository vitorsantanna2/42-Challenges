/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 22:38:23 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/08 09:02:49 by pvieira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_error(void)
{
	write(2, "Error\n", 6);
}

void	print_dict_error(void)
{
	write(2, "Dict Error\n", 11);
}

void	free_vars(char **splited_line, char *line)
{
	free(splited_line[0]);
	free(splited_line[1]);
	free(splited_line);
	free(line);
}
