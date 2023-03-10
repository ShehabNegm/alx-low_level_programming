#include <stdio.h>

/**
  * main - main function
  * @argc : input int
  * @argv : input pointers to array of strings
  *
  * Return: will always return 0 sucess
  */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
