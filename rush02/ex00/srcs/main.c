#include "rush02.h"

int	main(int argc, char **argv)
{
	int	fd;

	fd = open("numbers.dict", O_RDONLY);
	if (argc < 2)
		return (write(2, "Error\n", 6));
	if (ft_isdigit(argv[1]) < 0)
		return (write(2, "Error\n", 6));
	create_list(fd, ft_atoi(argv[1]));
	return (0);
}
