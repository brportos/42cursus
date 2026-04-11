#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int	epur;
		int	i;

		i = 0;
		epur = 0;
		while (av[1][i])
		{
			if (av[1][i] == '\t' || av[1][i] == ' ')
				epur = 1;
			else
			{
				if (epur == 1)
					write(1, " ", 1);
				write(1, &av[1][i], 1);
			}

			i++;
		}
	}
	write(1, "\n", 1);
}
