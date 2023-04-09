#include "main.h"
/**
  * create_file - will create a file and write to it
  * @filename: filename to be read from
  * @text_content: NULL terminated string to be added to file
  * Return: will return 1 on sucess, -1 if failed
  */

int create_file(const char *filename, char *text_content)
{
	int cr, fd, i;
	ssize_t wr;
	char *c;

	if (filename == NULL)
		return (-1);

	cr = creat(filename, 0600);
	if (cr < 0)
		return (-1);
	if (cr > 0 && text_content == NULL)
		return (1);

	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (-1);

	c = malloc(sizeof(char) * strlen(text_content));

	if (c == NULL)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		c[i] = text_content[i];
	c[i] = '\0';

	wr = write(fd, c, i);
	if (wr < 0 || wr != i)
	{
		free(c);
		return (-1);
	}
	close(fd);
	return (1);
}
