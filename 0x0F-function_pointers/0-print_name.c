#include "function_pointers.h"

/**
  * print_name - will print string according to function pointer
  * @name : input string to be printer
  * @f: function pointer
  */
void print_name(char *name, void (*f)(char *))
{
	if (!f)
		return;
	f(name);
}
