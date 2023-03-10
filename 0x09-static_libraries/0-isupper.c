#include "main.h"

/**
  * _isupper - checks if a char is upper letter using ASCII
  * @i : input as int
  *
  * Return: function will return 1 if uppercase or 0 otherwise
  */

int _isupper(int i)
{
	if (i >= 65 && i <= 90)
		return (1);
	else
		return (0);
}
