#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural and ends in 98
 * @n: the number the program prints to
 *Return: return the num
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
		printf("98\n");
}
