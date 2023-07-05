#include <unistd.h>
#include "../includes/rush.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(2, "Error\n", 6);
	else
	{
		if (validation(argv))
			write(2, "Error\n", 6);
	}
}
