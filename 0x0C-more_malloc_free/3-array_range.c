#include <stdlib.h>
#include "main.h"
/**
 * array_range - array of integer type
 * @min: minimum range
 * @max: maximum range, and total number of elements to be stored too.
 *
 * Return:to return a pointer
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
