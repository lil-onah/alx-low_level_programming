#include "main.h"

/**
 * _isdigit - prints a value if c is a digit
 * @c: checks for digit.
 * Return: return returns an integer
 */

int _isdigit(int c)
{
	if ((c > 'a' && c < 'Z') || (c > 'A' && c < 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
