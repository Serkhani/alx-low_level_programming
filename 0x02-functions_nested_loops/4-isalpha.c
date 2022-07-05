#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: input character
 * Return: 1 or 0 depending on the condition
 */

int _isalpha(int c)
{
	int i = (c >= 'a' && c <= 'z) || (c >= 'A' && c <= 'Z');

	return (i);
}
