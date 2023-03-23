#include <stdio.h>
#include <stdlib.h>

/**
  * main - will print opcodes
  * @argc: number of input arguments
  * @argv: arguments pointers to strings
  *
  */

int main (int argc, char *argv[])
{
	int i = 0;
	char *p = (char *)main;
	int bt;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bt = atoi(argv[1]);
	
	if (bt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bt; i++)
	{
		printf("%02x", p[i] & 0xFF);
		if (i != bt - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
