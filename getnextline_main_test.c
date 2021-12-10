#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int	main()
{
	int		fd;
	char	*line;

	fd = open("file", O_RDONLY)
	while(1)
	{
		line = get_next_line(fd);
		if(!line)
		{
			printf("END OF READ\n");
			break;
		}
		printf("%s", line);
		free(line);
	}
	close(fd);
}