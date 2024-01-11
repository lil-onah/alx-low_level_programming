#include "main.h"
/* declaration for putchar */
int _putchar(char c);

/**
 * print_numbers - prints numbers from 0 - 9
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
