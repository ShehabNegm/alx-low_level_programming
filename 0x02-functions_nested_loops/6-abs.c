#include "main.h"
/**
  * _abs - will return absolute of an int
  * @n : int passed to the function
  * Description: function that return absolute of an int
  * Return: absolute number of a number
  */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	return (0);
}
