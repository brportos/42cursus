#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int	main()
{
	int	fd = 0;
	char *buf = NULL;

	fd = open("text.txt", O_RDONLY);
	if (fd < 0)
	{
		printf ("Error");
		return (1);
	}

	buf = get_next_line(fd);
	while (buf != NULL)
	{
		printf("%s", buf);
		buf = get_next_line(fd);
	}
	free(buf);
	buf = NULL;
	/*char *line;

    line = get_next_line(42);
    printf("%s", line);
    free(line);*/
}