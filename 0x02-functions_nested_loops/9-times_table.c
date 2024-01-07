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
		for (g = 0; g <= 9; g++)
		{
			result = o * g;
			if (g == 0)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
