#include "../includes/rush.h"

int	validation(char **argv)
{
	if (validation_one_four(argv, 0))
		return (1);
	if (check_template(create_vector(argv), 0))
		return (1);
	return (0);
}

int	validation_one_four(char **argv, int n)
{
	int	i;
	int	stop;
	int	valid;

	i = 0;
	stop = 0;
	valid = 1;
	while (argv[1][i] && stop != 1)
	{
		if (valid == 1 && argv[1][i] >= '1' && argv[1][i] <= '4')
		{
			i++;
			n++;
			valid = 0;
		}
		else if (argv[1][i] == ' ')
		{
			valid = 1;
			i++;
		}
		else
			stop = 1;
	}
	stop = validation_n_itens(stop, n);
	return (stop);
}

int	validation_n_itens(int stop, int n)
{
	if (n != 16)
		return (1);
	else
		return (stop);
}
