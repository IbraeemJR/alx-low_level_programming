#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers containing a range of values
 * @min: The minimum value in the range
 * @max: The maximum value in the range (inclusive)
 *
 * Return: Pointer to the new array of integers
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
