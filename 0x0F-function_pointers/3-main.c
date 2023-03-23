#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
  * main - main entry function
  * @argc : number of arguments inserted
  * @argv : array of strings of arguments inserted
  * Return: will return 0
  */

int main(int argc, char *argv[])
{
	int i;
	int j;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0
			&& strcmp(argv[2], "*") != 0 && strcmp(argv[2], "%") != 0
			&& strcmp(argv[2], "/") != 0)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 ||
				strcmp(argv[2], "%") == 0) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	printf("%d\n", (*get_op_func(argv[2]))(i, j));
	return (0);
}
