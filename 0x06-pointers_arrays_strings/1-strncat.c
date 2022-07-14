#include "main.h"

/**
 * _strncat - Concatenates two strings using n characters from src.
 * @dest: The string onto which data is added
 * @src: The source string
 * @n: The number of characters to be added to dest from src
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
