#include <stdio.h>
/**
  * main - function main
  * Description: print all smallest of 2 2 digits number combination
  * Return: function will return smallest combination of 2 digits 2 number
  */
int main(void)
{
	int i = 0;
	int b;

	while (i < 99)
	{
		for (b = 0; b <= 99; b++)
		{
			if (i < b)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((b / 10) + '0');
				putchar((b % 10) + '0');
				if (i != 98)
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
		++i;
	}
	return (0);
}
