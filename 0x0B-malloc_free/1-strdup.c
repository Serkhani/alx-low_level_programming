#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate of
 * the string str
 * @str: input string
 * Return: NULL or pointer depending on output of malloc
 */

char *_strdup(char *str)
{

	int i = 0, size = 0;

	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
		;

/*+1 on the size puts the end of string character*/
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
		return (NULL);
	for (; i < size; i++)
		m[i] = str[i];
	return (m);
}
