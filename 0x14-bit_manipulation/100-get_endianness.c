#include "main.h"

/**
  * get_endianness - will check the endianness of machine
  * Return: will return 0 if big endian 1 if little endian
  */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	if (*c == 1)
		return (1);
	else
		return (0);
}

