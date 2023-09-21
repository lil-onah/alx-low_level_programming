#include <stdio.h>

/**
 * main - Entry point
 * author:onah
 * Return: Always 0 (Success)
 */
int main(void)
{
	int onah;

	for (onah = 48; onah < 58; onah++)
	{
		putchar(onah);
		if (onah != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
