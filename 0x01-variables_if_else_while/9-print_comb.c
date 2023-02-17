#include <stdio.h>
/**
  * main - function main
  * Description: print all single numbers in the form 0 2
  * Return: function return single numbers
  */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; ++i)
	{
		putchar((i) + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
