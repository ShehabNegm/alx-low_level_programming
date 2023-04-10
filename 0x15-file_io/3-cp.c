#include "main.h"

/**
  * main - function main as entry point
  * @argc : number of arguments
  * @argv : arguments array
  * Return: will return 0 on success
  */

int main(int argc, char *argv[])
{
	int cr, fd, rd, c1, c2;
	ssize_t wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	buffer = malloc(1024 * sizeof(char));
	rd = read(fd, buffer, 1024);

	if (fd < 0 || argv[1] == NULL || rd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	cr = open(argv[2], O_RDWR | O_CREAT, 0664);
	wr = write(cr, buffer, 1024);
	if (cr < 0 || wr < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	c1 = close(fd);
	c2 = close(cr);
	if (c1 < 0)
		dprintf(2, "Error: Can't close fd %d", fd);
	if (c2 < 0)
		dprintf(2, "Error: Can't close fd %d", fd);
	return (0);
}
