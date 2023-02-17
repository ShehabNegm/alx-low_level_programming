#include <stdio.h>
/**
  * main - function main
  * Description: print all numbers less than 10 using putchar
  * Return: function will return numbers less than 10 from 0
  */
int main(void)
{
	int i = 0;
	int b;

	while (i < 10)
	{
		for (b = 0; b < 10; b++)
		{
			if (i < b)
			{
				putchar((i) + '0');
				putchar((b) + '0');
				if (i != 8)
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
