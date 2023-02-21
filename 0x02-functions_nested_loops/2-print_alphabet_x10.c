#include "main.h"
/**
  * print_alphabet_x10 - will return all alphabet
  * Description: function that print a alphabet 10 times
  * Return: return alway zero
  */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch;

	while (i < 10)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
