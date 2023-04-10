#include "main.h"

/**
  * main - function main as entry point
  * @argc : number of arguments
  * @argv : arguments array
  * Return: will return 0 on success
  */

int main(int argc, char *argv[])
{
	int cr, fd, fd2, rd, c1, c2, cm;
	ssize_t wr;
	char *buffer = malloc(1024 * sizeof(char));

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(argv[1], O_RDONLY);
	rd = read(fd, buffer, 1024);
	if (fd < 0 || argv[1] == NULL || rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}
	cr = creat(argv[2], 0664);
	cm = fchmod(cr, 0664);
	fd2 = open(argv[2], O_WRONLY);
	wr = write(fd2, buffer, rd);
	if (cr < 0 || wr < 0 || fd2 < 0 || cm < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		exit(99);
	}
	c1 = close(fd);
	c2 = close(fd2);
	if (c1 < 0 || c2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c1 > c2);
		exit(100);
	}
	free(buffer);
	return (0);
}
