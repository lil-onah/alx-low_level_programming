#include "main.h"

/**
 * _isupper - checks and return a value if c is in uppercase
 * @c: returns an integer value if its in upper case
 * Return: return an int
 */

int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
