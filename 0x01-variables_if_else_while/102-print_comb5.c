#include <stdio.h>
/**
  * main - function main
  * Description: print all smallest of 4 digits combination
  * Return: function will return smallest combination of 4 digits
  */
int main(void)
{
	int i = 0;
	int b;
	int c;
	int d;

	while (i < 10)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				for (d = 0; d < 10; d++)
				{
					if (((i + b) < (b + c)) && ((i + b + c + d) != 35))
					{
						putchar((i) + '0');
						putchar((b) + '0');
						putchar(' ');
						putchar((c) + '0');
						putchar((d) + '0');
						putchar(',');
						putchar(' ');
					}
					else
					{
					putchar('\n');
					}
				}
			}
		}
	++i;
	}
	return (0);
}
