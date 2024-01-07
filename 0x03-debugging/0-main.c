#include "main.h"
#include <stdio.h>

/**
 * postive_or_negative - prints the num
 * @i: print positive, negative, and zero of random num
 * Date : 07-01-2024
 * Return: Always 0 (Success)
 */

void postive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
}
