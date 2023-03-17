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
	unsigned long multi;
	int i, j;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 0 || argv[i][j] > 9)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	multi = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", multi);
	return (0);
}
