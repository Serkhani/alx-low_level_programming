#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -  function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of s2 to add to s1
 * Return: ptr to the concatenated string or NULL depending on condition
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int totalStrLen = 0;
	unsigned int str1len = 0;
	unsigned int incrementer = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find the length of s1 */

	while (s1[str1len])
	        str1len++;
	totalStrLen = str1len;

	while (s2[totalStrLen - str1len] || ((totalStrLen - str1len) <= n))
		totalStrLen++;

	str = malloc(sizeof(char) * (totalStrLen + 1));

	if (str == NULL)
		return (NULL);

	int i = 0;

	for (; i < str1len; i++)
	{
		str[incrementer++] = s1[i];
	}

	for (i = 0; i < (totalStrLen - str1len); i++)
	{
		str[incrementer++] = s2[i];
	}

	str[incrementer] = '\0';

	return (str);

}
