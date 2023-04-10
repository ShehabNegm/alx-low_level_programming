#include "main.h"

/**
  * close_fd - will close a file and return error handling message
  * @fd: file descriptor
  */

void close_fd(int fd)
{
	int i = close(fd);

	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
  * main - function main as entry point
  * @argc : number of arguments
  * @argv : arguments array
  * Return: will return 0 on success
  */

int main(int argc, char *argv[])
{
	int cr, fd, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(1024 * sizeof(char));

	fd = open(argv[1], O_RDONLY);
	cr = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(fd, buffer, 1024)) != 0)
	{
		if (fd < 0 || argv[1] == NULL || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wr = write(cr, buffer, rd);
		if (cr < 0 || wr < 0 || buffer == NULL || cr < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	}
	close_fd(fd);
	close_fd(cr);
	free(buffer);
	return (0);
}
