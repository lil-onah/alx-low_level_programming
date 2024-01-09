#include "main.h"

/**
 * _isdigit - prints a value if c is a digit
 * @c: checks for digit.
 * Return: return returns an integer
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
