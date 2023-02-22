#include "main.h"
/**
  * times_table - will return table 9
  * Description: function will return table 9
  * Return: table 9
  */
void times_table(void)
{
	int a = 0;
	int b;

	while (a <= 9)
	{
		for (b = 0 ; b < 9 ; b++)
		{
			if (a * b < 10 && (a * (b + 1) < 10))
			{
				_putchar((a * b) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar(((a * b) / 10) + '0');
				_putchar(((a * b) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		if ((a * 9) < 10)
		{
			_putchar(' ');
			_putchar((a * 9) + '0');
			_putchar('\n');
		}
		else
		{
			_putchar(((a * 9) / 10) + '0');
			_putchar(((a * 9) % 10) + '0');
			_putchar('\n');
		}
		a++;
	}
}
