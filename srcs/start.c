#include <unistd.h>
#include "../includes/rush.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(2, "Error\n", 6);
	else
	{
		if (validation_one_four(argv, 0))
			write(2, "Error\n", 6);
		else
			write(1, "Successful\n", 11);
	}
}
