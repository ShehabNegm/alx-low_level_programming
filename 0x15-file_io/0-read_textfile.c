#include "main.h"
/**
  * read_textfile - will read a file and print it to stdout
  * @filename: filename to be read from
  * @letters: number of letters it should read
  * Return: will return number of letters actually read
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sz, wr;
	char *c = malloc(letters * sizeof(char));

	if (c == NULL || filename == NULL || letters == 0)
	{
		free(c);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(c);
		return (0);
	}

	sz = read(fd, c, letters);
	if (sz < 0)
	{
		free(c);
		return (0);
	}

	wr = write(STDOUT_FILENO, c, sz);
	if (wr < 0 || wr != sz)
	{
		free(c);
		return (0);
	}
	close(fd);
	return (wr);
}
