#include "main.h"

/**
 * _isupper - checks and return a value if c is in uppercase
 * @c: returns an integer value if its in upper case
 * Return: return an int
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
