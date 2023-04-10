#include "main.h"
/**
  * append_text_to_file - will append text to file
  * @filename: filename to be read from
  * @text_content: NULL terminated string to be appended to file
  * Return: will return 1 on success, -1 if failed
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t wr;
	char *c;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd < 0)
		return (-1);
	if (fd > 0 && text_content == NULL)
		return (1);

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
