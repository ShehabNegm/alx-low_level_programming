#include <stdio.h>
/**
  * main - function main
  * Description: print all alphapet using putchar() in reverse
  * Return: return all alphapet in lower case in reverse
  */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; --ch)
		putchar(ch);
	putchar('\n');
	return (0);
}
