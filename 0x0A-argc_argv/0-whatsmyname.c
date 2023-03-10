#include <stdio.h>

/**
  * main - main function
  * @argc : input int
  * @argv : input pointers to array of strings
  *
  * Return: will always return 0 sucess
  */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
