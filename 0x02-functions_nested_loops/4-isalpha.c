#include "main.h"
/**
  * _isalpha - will return if alphabet is lowercase
  * @c : int to be checked
  *
  * Description: function that print a word
  * Return: 1 if 'c' is alphabet and 0 if it is not
  */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
