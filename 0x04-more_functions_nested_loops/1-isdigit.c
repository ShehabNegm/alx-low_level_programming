#include "main.h"

/**
  * _isdigit - checks if a char is number using ASCII
  * @i : input as int
  *
  * Return: function will return 1 if number or 0 otherwise
  */

int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
		return (1);
	else
		return (0);
}
