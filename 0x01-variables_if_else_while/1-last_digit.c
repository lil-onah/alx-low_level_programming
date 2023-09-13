#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Author: onah
 * Description: This program will assign a random number to a variable n
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit = n % 10;

	printf("The string Last digits of %d is ", n);

		if (lastDigit > 5)
			printf("and is greater than 5\n");
		else if (lastDigit == 0)
			printf("and is 0\n");

		else if (lastDigit < 5)
			printf("and is less than 6 and not 0\n");


	return (0);
}
