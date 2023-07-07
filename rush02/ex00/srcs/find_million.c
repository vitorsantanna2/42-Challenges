#include "rush02.h"

void	find_number_less_billion(long long int num, t_list *dict)
{
	long long int	million;
	long long int	left;
	t_list	*head;

	million = (num / 1000000);
	left = num % 1000000;
	head = dict;
	select_numbers(million, dict);
	write(1, " ", 1);
	while (dict->next && dict->key != 1000000)
		dict = dict->next;
	if (!dict->next)
		return ;
	write(1, dict->content, ft_strlen(dict->content));
	if (left == 0)
		return ;
	write(1, " ", 1);
	select_numbers(left, head);
}

void	find_number_less_trillion(long long int num, t_list *dict)
{
	long long int	billion;
	long long int	left;
	t_list	*head;

	billion = (num / 1000000000);
	left = num % 1000000000;
	head = dict;
	select_numbers(billion, dict);
	write(1, " ", 1);
	while (dict->next && dict->key != 1000000000)
		dict = dict->next;
	write(1, dict->content, ft_strlen(dict->content));
	if (left == 0)
		return ;
	write(1, " ", 1);
	select_numbers(left, head);
}
