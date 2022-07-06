#include "main.h"

/**
 * jack_bauer -  prints every minute of the day of Jack Bauer
 */

void jack_bauer(void)
{
	int min, hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (j < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
			}
			else if (j >= 10)
			{
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
	}
}
