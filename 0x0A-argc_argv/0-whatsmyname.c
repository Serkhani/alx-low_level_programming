#include <stdlib.h>
#include <stdio.h>

/**
 * main - returns name
 * @argc: count
 * @argv: string array
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}
	return (0);
}
