#include "main.h"

/**
 * print_rev -  prints the reverse of a string
 * @s: input string
 * Return: void
 */

void prin_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}