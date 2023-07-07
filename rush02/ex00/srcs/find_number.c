#include "rush02.h"

void	find_number_less_20(int num, t_list *dict)
{
	while (dict->next && dict->key != num && num <= 20)
		dict = dict->next;
	if (!dict->next)
		return ;
	write(1, dict->content, ft_strlen(dict->content));
}

void	find_number_less_100(int num, t_list *dict)
{
	int	decimal;
	int	left;
	t_list	*head;

	decimal = (num / 10) * 10;
	left = num % 10;
	head = dict;
	while (dict->next && dict->key != decimal)
		dict = dict->next;
	if (!dict->next)
		return ;
	write(1, dict->content, ft_strlen(dict->content));
	if (left == 0)
	{
		write(1, "\n", 1);
		return ;
	}
	write(1, "-", 1);
	select_numbers(left, head);
}

void	find_number_less_1000(int num, t_list *dict)
{
	int	centene;
	int	left;
	t_list	*head;

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
	{
		write(1, "\n", 1);
		return ;
	}
	write(1, " ", 1);
	select_numbers(left, head);
}

void	find_number_less_1000000(int num, t_list *dict)
{
	int	thousand;
	int	left;
	t_list	*head;

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
	{
		write(1, "\n", 1);
		return ;
	}
	write(1, " ", 1);
	select_numbers(left, head);
}
