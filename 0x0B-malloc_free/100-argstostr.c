#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - find length of a string
 * @s: string
 * Return: int
 */


int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *argstostr - description
 * @ac: int
 * @av: arguments
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i = 0, lenOfAllArg = 0, j = 0, incrementer = 0;

	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, lenOfAllArg++)
		lenOfAllArg += _strlen(av[i]);

	str = malloc(sizeof(char) * lenOfAllArg + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, incrementer++)
			str[incrementer] = av[i][j];
		str[incrementer] = '\n';
		incrementer++;
	}
	str[incrementer] = '\0';
	return (str);
}
