#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of elements, 0, using malloc
 * @nmemb: number of elements of the array
 * @size: size of each element of the array
 * Return: ptr or NULL depending on the condition
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;
	return ((void *)ptr);
}
