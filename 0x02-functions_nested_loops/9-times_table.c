#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: return Always (success)
 */

void times_table(void)
{
	int o, g, result;

	for (o = 0; o <= 9; o++)
	{
		_putchar('0');
		for (g = 1; g <= 9; g++)
		{
			_putchar(',');
			_putchar(' ');
		result = o * g;
		if (result <= 9)
			_putchar(' ');
		else
		_putchar((result / 10) + '0');
		_putchar((result % 10) + '0');
	}
		_putchar('\n');
	}
}
