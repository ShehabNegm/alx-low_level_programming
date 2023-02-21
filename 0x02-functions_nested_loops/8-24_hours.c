#include "main.h"
/**
  * jack_bauer - will return absolute last digit
  * Description: function will print every minute of a day
  * Return: evey minute of a day
  */
void jack_bauer(void)
{
	int m;
	int h = 0;

	while (h < 24)
	{
		for (m = 0 ; m < 60 ; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
		h++;
	}
}
