#include "search_algos.h"

/**
* linear_search - searches for values in an array of integers
* @array: pointer to the first element
* @size: number of element in array
* @value: value to search for
* Return: index of value or -1 if value not found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || array == NULL || size == 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
