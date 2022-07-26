#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 * @s: pointer to String
 * Return: Nothing
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * str_concat - function that concatenates two strings.
 * @s1: char to concatenate
 * @s2: char to concatenate
 *
 * Return: pointer to char
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int firstStrLen = 0, secondStrLen = 0, concatStrLen = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	firstStrLen = _strlen(s1);
	secondStrLen = _strlen(s2);
	concatStrLen = firstStrLen + secondStrLen + 1;
	str = malloc(concatStrLen * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < firstStrLen; i++)
		*(str + i) = *(s1 + i);

	for (i = 0; i <= secondStrLen; i++)
		*(str + i + firstStrLen) = *(s2 + i);

	*(str + 1) = '\0';

	return (str);
}
