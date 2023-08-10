#include <stdlib.h>
#include "main.h"
int find_nums(int lowest, int highest);
/**
 * array_range - Creates an array of integers
 * @min: Minimum value in the array
 * @max: Maximum value in the array
 * Return: Pointer to the created array
 */
int *array_range(int min, int max)
{
	int *arr, i, x;

	if (min > max)
		return (NULL);

	x = max - min + 1;
	arr = malloc(sizeof(int) * x);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
