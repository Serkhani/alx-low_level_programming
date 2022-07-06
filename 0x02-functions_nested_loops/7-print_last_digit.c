#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: input number
 * Return: - returns value of the last digit
 */

int print_last_digit(int n)
{
	n = _abs(n);
	return (n % 10);
}
