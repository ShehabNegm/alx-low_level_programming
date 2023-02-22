#include <stdio.h>
/**
 * main - function main
 * Return: return number less than 1024 that are
 * Description : return sum of 3 and 5 numbers under 1024
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
