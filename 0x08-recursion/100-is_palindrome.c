#include "main.h"

/**
 * check -  checks to see if the word is a palindrome
 * @s: a pointer to the string
 * @start: int moves from right to left
 * @end: int move from left to right
 * @pair: int
 * Return: 0 or 1 if the string is a palindrome or not
 */

int check(char *s, int start, int end, int pair)
{
	if ((start == end && pair != 0) || (start == end + 1 && pair == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (check(s, start + 1, end - 1, pair));
}



/**
 * last_index - Returns the last index of a string (counts the null char)
 * @s: Pointer the string
 * Return: int
 */



int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;
	return (n);
}


/**
 * is_palindrome - calculates the length of the string and calls the
 * checks function
 * @s: String to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int end = last_index(s);

	return (check(s, 0, end - 1, end % 2));
}
