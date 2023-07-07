#include "rush02.h"

void	find_number_less_20(int num, t_list *dict)
{
	while (dict->next && dict->key != num && num <= 20)
	{
		dict = dict->next;
	}
	if (!dict->next)
		return  ;
	write(1, dict->content, ft_strlen(dict->content));
	write(1, "\n", 1);
}
