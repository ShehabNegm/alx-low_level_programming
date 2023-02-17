#include <stdio.h>
/**
  * main - function main
  * Description: function will print all alphapet using putchar() not q or e
  * Return: function will return all alphapet in lower case except q or e
  */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ++ch)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
