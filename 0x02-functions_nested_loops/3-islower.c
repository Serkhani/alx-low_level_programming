#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c : a input character argument
 * Return: 1 or 0 depending on condition
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
