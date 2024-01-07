#include <stdio.h>

/**
 * main - prints fibonacci numbers
 * Return: return success
 */

int main(void)
{
	int n = 50;
	unsigned long first = 1, second = 2, sum;

	printf("%lu, %lu", first, second);

int o = 3;
while (o <= n)
{
	sum = first + second;
printf(", %lu", sum);

first = second;
second = sum;
o++;
}
printf("\n");
return (0);
}
