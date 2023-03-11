#include <stdio.h>
#include <stdlib.h>

/**
  * main - main function
  * @argc : input int
  * @argv : input pointers to array of strings
  *
  * Return: will always return 0 sucess
  */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; ++i)
	{
		if (atoi(argv[i]) == 0 && argv[i][i] != 0)
		{
			printf("Error\n");
			return (1);
		}

		else
		{
		sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
