/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_number.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andde-so <andde-so@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 00:18:04 by andde-so          #+#    #+#             */
/*   Updated: 2023/07/08 00:18:05 by andde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	find_number_less_20(long long int num, t_list *dict)
{
	while (dict->next && dict->key != num && num <= 20)
		dict = dict->next;
	if (!dict->next)
		return ;
	write(1, dict->content, ft_strlen(dict->content));
}

void	find_number_less_100(long long int num, t_list *dict)
{
	long long int	decimal;
	long long int	left;
	t_list			*head;

	decimal = (num / 10) * 10;
	left = num % 10;
	head = dict;
	while (dict->next && dict->key != decimal)
		dict = dict->next;
	if (!dict->next)
		return ;
	write(1, dict->content, ft_strlen(dict->content));
	if (left == 0)
		return ;
	write(1, "-", 1);
	select_numbers(left, head);
}

void	find_number_less_1000(long long int num, t_list *dict)
{
	long int	centene;
	long int	left;
	t_list		*head;

	centene = (num / 100);
	left = num % 100;
	head = dict;
	select_numbers(centene, dict);
	write(1, " ", 1);
	while (dict->next && dict->key != 100)
		dict = dict->next;
	if (!dict->next)
		return ;
	write(1, dict->content, ft_strlen(dict->content));
	if (left == 0)
		return ;
	write(1, " ", 1);
	select_numbers(left, head);
}

void	find_number_less_1000000(long long int num, t_list *dict)
{
	long long int	thousand;
	long long int	left;
	t_list			*head;

	thousand = (num / 1000);
	left = num % 1000;
	head = dict;
	select_numbers(thousand, dict);
	write(1, " ", 1);
	while (dict->next && dict->key != 1000)
		dict = dict->next;
	if (!dict->next)
		return ;
	write(1, dict->content, ft_strlen(dict->content));
	if (left == 0)
		return ;
	write(1, " ", 1);
	select_numbers(left, head);
}
