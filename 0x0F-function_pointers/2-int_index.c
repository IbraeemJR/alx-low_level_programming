#include "function_pointers.h"

/**
 * int_index - Searches for an element in an array and returns its index
 * @array: Pointer to the integer array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function that compares the array elements
 *
 * Description:
 * This function takes an integer array 'array' with 'size' elements and a
 * function pointer 'cmp'. If 'array' is not NULL, 'size' is greater than 0,
 * and 'cmp' is not NULL, the function searches for an element in the array
 * for which the function 'cmp' returns a non-zero value. If such an element is
 * found, the function returns its index. If no such element is found, or if
 * any of the parameters are invalid, the function returns -1.
 *
 * Return: The index of the first element for which 'cmp' does not return 0,
 *         or -1 if no such element is found or an error occurs.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
