#include "main.h"

/**
 * largest_number - returns the largest number
 * @i: first number
 * @j: second number
 * @k: third number
 * Return: returns the largest number
 */

int largest_number(int i, int j, int k)
{
	int largest;

	if (i >= j && i >= k)
	{
		largest = i;
	}
	else if (j >= i && j >= k)
	{
		largest = j;
	}
	else
	{
		largest = k;
	}

	return (largest);
}
