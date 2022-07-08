#include "main.h"

/**
 * _isdigit - returns 1 if c is a digit
 * @c: input integer to be tested
 * Return: 1 or 0 depending on the state of the condition
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
