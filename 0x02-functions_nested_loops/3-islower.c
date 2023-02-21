#include "main.h"
/**
  * _islower - will return if alphabet is lowercase
  * @c : int to be checked
  *
  * Description: function that print a word
  * Return: 1 if 'c' is lowercase and 0 if it is not
  */
int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
