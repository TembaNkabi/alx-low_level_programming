#include "search_algos.h"

/**
* binary_search - searches for values in a sorted array of integers
* @array: pointer to the first element
* @size: number of element in array
* @value: value to search for
* Return: index of value or -1 if value not found
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, mid, high, low = 0;

	if (!array || array == NULL)
	{
		return (-1);
	}
	if (size == 1)
	{
		printf("Searching in array: %d\n", array[0]);
		return (0);
	}
	high = size - 1;
	while (low != high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i < high + 1; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (value == array[mid])
		{
			return (mid);
		}
		if (value > array[mid])
		{
			low = mid + 1;
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
	}
	printf("Searching in array: %d\n", array[low]);
	return (-1);
}
