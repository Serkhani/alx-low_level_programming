#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter on each
 * element of an array
 * @array: array that contains elements to be executed by function
 * @size: the size of the array
 * @action: pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if(!action || !array)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	return (0);
}
