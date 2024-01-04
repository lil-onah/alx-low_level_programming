#include "main.h"

/**
 *  print_alphabet - Entry point
 *
 * Description: program that prints alphabets in lower case
 *followed by a new line
 * Return: return the value of int
 */

void print_alphabet(void)
{
	int og;

	for (og = 'a'; og <= 'z'; og++)
	{
		_putchar(og);
	}
		_putchar('\n');
}
