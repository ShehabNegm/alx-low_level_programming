#include <stdio.h>
/**
  * main - function main
  * Description: print all hex numbers
  * Return: function will return numbers in hex form
  */
int main(void)
{
	int i;
	char ch;

	for (i = 0 ; i < 10 ; ++i)
		putchar((i) + '0');
	for (ch = 'a' ; ch <= 'f' ; ++ch)
		putchar(ch);
	putchar('\n');
	return (0);
}
