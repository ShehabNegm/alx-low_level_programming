#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - variadic function to print arguments
  * @n: number of arguments inserted
  * @separator: to be inserted between numbers
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *j = va_arg(ap, char *);
		(j == NULL) ? printf("(nil)") : printf("%s", j);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
