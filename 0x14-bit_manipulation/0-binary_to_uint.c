#include "main.h"

/**
  * binary_to_uint - will convert binary to unsinged int
  * @b : input string of 0 and 1
  * Return: will return unsigned converted int
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	size_t len;
	int i;
	int pwr = 1;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = len - 1 ; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			num += pwr;
		}
		pwr *= 2;
	}
	return (num);
}
