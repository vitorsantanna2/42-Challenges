#include "rush02.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (write(2, "Error\n", 6));
	if (ft_isdigit(argv[1]) < 0)
		return (write(2, "Error\n", 6));
	return (0);
}
