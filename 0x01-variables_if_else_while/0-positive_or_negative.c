#include <stdlib.h>
#include <time.h>
/**
 * main - function main
 * Description: if statment will check the n int given for + - or 0
 * Return: function will return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

