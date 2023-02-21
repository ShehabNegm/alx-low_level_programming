#include "main.h"
/**
  * print_alphabet - will return all alphabet
  * Description: function that print a word
  * Return: return alway zero
  */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ++ch)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
