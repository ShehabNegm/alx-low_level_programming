#include <stdio.h>
/**
  * main - function main
  * Description: print all smallest of 3 digits combination
  * Return: function will return smallest combination of 3 digits
  */
int main(void)
{
	int i = 0;
	int b;
	int c;

	while (i < 10)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 10; c++)
			{
				if (i < b && b < c)
				{
					putchar((i) + '0');
					putchar((b) + '0');
					putchar((c) + '0');
					if (i != 7)
					{
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
