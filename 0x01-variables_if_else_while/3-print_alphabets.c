#include <stdio.h>
/**
  * main - function main
  * Description: function will print all alphapet using putchar()
  * Return: function will return all alphapet in lower case
  */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ++ch)
		putchar(ch);
	for (ch = 'A' ; ch <= 'Z' ; ++ch)
		putchar(ch);
	putchar('\n');
	return (0);
}
