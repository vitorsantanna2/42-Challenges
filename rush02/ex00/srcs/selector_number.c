/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selector_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:18:29 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/08 00:18:30 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	select_numbers(long long int num, t_list *dict)
{
	if (num >= 1000000000 && num < 1000000000000)
		find_number_less_trillion(num, dict);
	if (num >= 1000000 && num < 1000000000)
		find_number_less_billion(num, dict);
	if (num >= 1000 && num < 1000000)
		find_number_less_1000000(num, dict);
	if (num >= 100 && num < 1000)
		find_number_less_1000(num, dict);
	if (num > 20 && num < 100)
		find_number_less_100(num, dict);
	if (num >= 0 && num <= 20)
		find_number_less_20(num, dict);
}
