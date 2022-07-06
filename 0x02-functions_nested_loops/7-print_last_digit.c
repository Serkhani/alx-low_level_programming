#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: input number
 * Return: - returns value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;
	last_digit = n % 10;
	if (n == INT_MIN)
		return (88);
	_putchar(last_digit + '0');
	return (last_digit);
}
