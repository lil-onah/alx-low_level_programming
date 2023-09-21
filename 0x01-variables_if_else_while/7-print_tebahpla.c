#include <stdio.h>

/**
 * main - Entry point
 * author: onah
 * Return: Always 0 (Success)
 */
int main(void)
{
	char onah;

	for (onah = 'z'; onah >= 'a'; onah--)
		putchar(onah);
	putchar('\n');
	return (0);
}
