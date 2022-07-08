#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: input character
 * Return: 1 or 0 depending on the condition
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
