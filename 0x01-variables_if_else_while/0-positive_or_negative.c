#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 * Description : C program to print positive, negative, and zero of random num
 * Author: Onah Godwin
 * Date : 13-09-2023
 * Return : 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
