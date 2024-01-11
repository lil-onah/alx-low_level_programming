#include "main.h"
/* delared c as an int do that putchar would not be implicit */

int _putchar(char c);

/**
 * print_numbers - prints numbers from 0 - 9
 * Return: return 0 if succesful
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
