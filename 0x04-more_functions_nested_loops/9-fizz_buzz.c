#include <stdio.h>

/**
  * main - will print numbers from 1 to 100 fizzbuzz
  * Return: print all numbers except dividables by 3 or 5 or both
  */

int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 15 != 0)
			printf("Fizz");

		else if (i % 5 == 0 && i % 15 != 0)
			printf("Buzz");

		else if (i % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
