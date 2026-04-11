#include <unistd.h>
#include <stdlib.h>

int	word_count(char *str)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if(str[i] != ' ' && str[i + 1] == ' ' || str[i + 1] == '\0')
			word++;
		i++;
	}
	return (word);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		char	**words = malloc(sizeof(char *) * word_count);
		if (!av)
			return (0);
		while (av[1][i])
		{
			if (av[1][i] != 32 || av[1][i] != '\0')
			i++;
		}
	}
	write(1, "\n", 1);
}
