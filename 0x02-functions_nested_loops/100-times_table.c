#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: input integer
 */

void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;
	int i, j, product;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == 0)
			{
				_putchar(48);
				continue;
			}
			product = i * j;
			_putchar(',');
			_putchar(' ');
			if (product >= 10)
			{
				_putchar(product / 10 + 48);
				_putchar(product % 10 + 48);
			}
			else
			{
				_putchar(' ');
				_putchar(product + 48);
			}
		}
		_putchar('\n');
	}
}
