#include <stdlib.h>

/**
 * array_range - creates an array of integers, ordered from @min to @max
 * @min: minimum value of the array
 * @max: maximum value of the array
 * Return: ptr or NULL depending on the condition
 */



int *array_range(int min, int max)
{

	int i, elementNum;

	int *ptr;

	if (min > max)
		return (NULL);

	elementNum = (max - min) + 1;

	ptr = malloc(sizeof(int) * elementNum);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < elementNum; i++)
		ptr[i] = min + i;
	return (ptr);
}
