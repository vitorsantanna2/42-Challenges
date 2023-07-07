#include "rush02.h"
#include <stdio.h>

void	print_stack(t_list *stack)
{
	t_list	*temp;

	temp = stack;
	while (temp)
	{
		printf("%i:", temp->key);
		printf("%s", temp->content);
		temp = temp->next;
	}
	write(1, "\n", 1);
}
