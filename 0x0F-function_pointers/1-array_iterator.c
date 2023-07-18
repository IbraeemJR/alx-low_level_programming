#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the array of integers
 * @size: Number of elements in the array
 * @action: Pointer to the function to be executed on each element
 *
 * Description:
 * This function takes an integer array 'array' with 'size' elements and a
 * function pointer 'action'. If both 'array' and 'action' are not NULL, the
 * function calls the function 'action' on each element of the array. The
 * function 'action' is expected to perform some action on the integer value.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
