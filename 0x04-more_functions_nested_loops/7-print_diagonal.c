#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: length of line
 */

void print_diagonal(int n)
{
	int i = 0, s;

	if (n > 0)
	{
		while (i < n)
		{
			for (s = 0; s < i; s++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
