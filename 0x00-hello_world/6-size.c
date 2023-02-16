#include <stdio.h>
/**
  * main -  will return size of different data types
  * Description: will return size of data types
  * Return: will return zero
  */
int main(void)
{
	char c;
	int i;
	long int k;
	long long int x;
	float f;

	printf("Size of a char: %i byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %i byte(s)\n", sizeof(k));
	printf("Size of a long long int: %i byte(s)\n", sizeof(x));
	printf("Size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
