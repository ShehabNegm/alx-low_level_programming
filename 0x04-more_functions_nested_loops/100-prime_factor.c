#include <stdio.h>

/**
 * main - check the largest factor number
 * Return: largest factor number of int
 */

int main(void)
{
	long int n = 612852475143;
	long int i = 2; /* intial value */
	long int fct; /*factor*/
	long int lfct = 0; /*largest factor*/

	while (i <= n)
	{
		while (n % i == 0)
		{
			fct = i;
			n = n / fct;
			if (fct > lfct)
			{
				lfct = fct;
			}
		}
		i++;
	}
	printf("%ld\n", lfct);
	return (0);
}

