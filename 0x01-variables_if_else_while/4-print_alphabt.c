#include <stdio.h>

/**
 * main - Entry point
 * author: onah
 * Return: Always 0 (Success)
 */
int main(void)
{
	char onah;

	for (onah = 'a'; onah <= 'z'; onah++)
	{
		if (onah != 'q' && onah != 'e')
			putchar(onah);
	}
	putchar('\n');
	return (0);
}
