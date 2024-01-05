#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: return int value 0
 * Return: return Always (success)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
			return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
			return (0);
	}
	else
	{
		_putchar('-');
			return (-1);
	}
}
