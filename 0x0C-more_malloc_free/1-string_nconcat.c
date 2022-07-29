#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -  function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of s2 to add to s1
 * Return: ptr to the concatenated string or NULL depending on condition
 */

har *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int lenS1, lenS2, lenStr, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (lenS1 = 0; s1[lenS1] != '\0'; lenS1++)
		;
	for (lenS2 = 0; s2[lenS2] != '\0'; lenS2++)

	if (n > lenS2)
		n = lenS2;

	lenStr = lenS1 + n;

	str = malloc(lenStr + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < lenStr; i++)
		if (i < lenS1)
			str[i] = s1[i];
		else
			str[i] = s2[i - lenS1];

	str[i] = '\0';

	return (str);
}
