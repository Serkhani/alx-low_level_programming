#include "main.h"

/**
 * print_numbers - function that prints numbers from 0 to 9.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + 48);
	}
	_putchar('\n');
}
