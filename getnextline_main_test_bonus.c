#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int	main()
{
	int	fd1;
	int	fd2;
	int	fd3;

	fd1 = open("file1", O_RDONLY);
	fd2 = open("file2", O_RDONLY);
	fd3 = open("file3", O_RDONLY);
	char	*line1;
	char	*line2;
	char	*line3;
	for(int i= 0; i < 10; i++)
	{
		printf("----- Line %i -----\n", i);
		line1 = get_next_line(fd1);
		if (line1)
		{
			printf("FD1: %s\n", line1);
			free(line1);
		}
		line2 = get_next_line(fd2);
		if (line2)
		{
			printf("FD2: %s\n", line2);
			free(line2);
		}
		line3 = get_next_line(fd3);
		if (line3)
		{
			printf("FD3: %s\n", line3);
			free(line3);
		}
	}
	close(fd1);
	close(fd2);
	close(fd3);
}
