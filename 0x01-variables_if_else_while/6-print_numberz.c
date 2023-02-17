#include <stdio.h>
/**
  * main - function main
  * Description: print all numbers less than 10 using putchar
  * Return: function will return numbers less than 10 from 0
  */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; ++i)
		putchar((i) + '0');
	putchar('\n');
	return (0);
}
