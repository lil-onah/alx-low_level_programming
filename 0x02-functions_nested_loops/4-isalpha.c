#include "main.h"

/**
 * _isalpha - Return 1 if c is a letter. lower or uppercase
 * Desription: program that uses the if else statement to determine an answer
 * Return: return an int value
 */

int _isalpha(int c)
{
	if ((c > 'a' && c <= 'z') || (c > 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
