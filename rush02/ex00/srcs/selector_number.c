#include "rush02.h"

void	select_numbers(int num, t_list *dict)
{
	if (num >= 1000 && num < 1000000)
		find_number_less_1000000(num, dict);
	if (num >= 100 && num < 1000)
		find_number_less_1000(num, dict);
	if (num > 20 && num < 100)
		find_number_less_100(num, dict);
	if (num > 0 && num <= 20)
		find_number_less_20(num, dict);
}
