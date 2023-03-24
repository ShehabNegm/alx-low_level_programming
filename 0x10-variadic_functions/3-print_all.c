#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_string - function will print string
  * @arg: input arg
  */

void print_string(va_list arg)
{
	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
  * print_float - function will print float
  * @arg: input arg
  */

void print_float(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
  * print_int - function will print int
  * @arg: input arg
  */

void print_int(va_list arg)
{
	int i = va_arg(arg, int);

	printf("%d", i);
}

/**
  * print_char - function will print char
  * @arg: input arg
  */

void print_char(va_list arg)
{
	char c = va_arg(arg, int);

	printf("%c", c);
}


/**
  * print_all - variadic function to print all arguments
  * @format: format of arguments
  */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *sep = ""; /*seperator to be used*/
	fun_print funs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && format[i] != *(funs[j].sym))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			funs[j].fun(ap);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
