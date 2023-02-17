#include <stdio.h>
#include <stdlib.h>
/**
  *main - function main
  *Description: function will print a quote into command line from c file
  *Return: function will return 1
  */
int main(void)
{
	system("echo 'and that piece of art is useful\" - \
Dora Korpar, 2015-10-19' >&2");
	return (1);
}
