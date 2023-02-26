#include "main.h"

/**
  * print_times_table - will print table of n times
  * @num : numer int
  *
  * Return: will return table of n times table
  */

void print_times_table(int num)
{
	int i;
	int j;

	if (num > 0 && num <= 15)
	{
		for (i = 0; i <= num; i++)
		{
			_putchar('0');
			_putchar(',');
			for (j = 1; j <= num; j++)
			{
				if (i * j < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j) + '0');
				}
				if (i * j < 100 && i * j >= 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((i * j / 10) + '0');
					_putchar((i * j % 10) + '0');
				}

				if (i * j >= 100)
				{
					_putchar(' ');
					_putchar((i * j / 100) + '0');
					_putchar((i * j / 10 % 10) + '0');
					_putchar((i * j % 10) + '0');
				}
				if (j == num)
					_putchar('\n');
				else
					_putchar(',');
			}
		}
	}
}
