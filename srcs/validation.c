#include <unistd.h>

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
	return (stop);
}
