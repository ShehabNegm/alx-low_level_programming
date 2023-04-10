#include "main.h"

/**
  * main - function main as entry point
  * @argc : number of arguments
  * @argv : arguments array
  * Return: will return 0 on success
  */

int main(int argc, char *argv[])
{
	int cr, fd, rd, c1, c2, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(1024 * sizeof(char));

	fd = open(argv[1], O_RDONLY);
	rd = read(fd, buffer, 1024);
	if (fd < 0 || argv[1] == NULL || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	cr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	wr = write(cr, buffer, rd);
	if (cr < 0 || wr < 0 || buffer == NULL || cr < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	c1 = close(fd);
	c2 = close(cr);
	if (c1 < 0 || c2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c1 > c2 ? cr : fd);
		exit(100);
	}
	free(buffer);
	return (0);
}
