#include <stdio.h>

/**
 * main - Entry point
 * autor: onah
 * Return: Always 0 (Success)
 */
int main(void)
{
	int onah;
	char kingx;

	for (onah = 48; onah < 58; onah++)
		putchar(onah);
	for (kingx = 'a'; kingx <= 'f'; kingx++)
		putchar(kingx);
	putchar('\n');
	return (0);
}
