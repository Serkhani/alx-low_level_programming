#include "main.h"

/**
 * times_table - prints the 9 times table
 */

void times_table(void)
{
	int product = 0;
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			product = y * x;
			_putchar(product + '0');
			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
