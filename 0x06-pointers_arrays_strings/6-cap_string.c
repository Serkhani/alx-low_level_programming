#include "main.h"

/**
 * cap_string - Capitalizes all characters in a string
 * @str: pointer to string to be capitalized
 * Return: returns pointer to the string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' || str[index - 1] == '\t' ||
		    str[index - 1] == '\n' || str[index - 1] == ',' ||
		    str[index - 1] == ';' || str[index - 1] == '.' ||
		    str[index - 1] == '!' || str[index - 1] == '?' ||
		    str[index - 1] == '"' || str[index - 1] == '(' ||
		    str[index - 1] == ')' || str[index - 1] == '{' ||
		    str[index - 1] == '}' || index == 0)
			str[index] -= 32;
		index++;
	}
	return (str);
}
