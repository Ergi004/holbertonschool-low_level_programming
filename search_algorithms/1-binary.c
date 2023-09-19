#include "search_algos.h"

/**
 * binary_search - Search the array using binary
 * @array: A pointer to an array
 * @size: size of the array
 * @value: The value to search in the array
 * Return: -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i;
	int first = 0, last = size - 1, mid;

	if (!value || array == NULL)
		return (-1);

	while (first <= last)
	{
		mid = (first + last) / 2;
		printf("Searching in array: ");
		for (i = first; i < last; i++)
		{
			if (i == first)
				printf("%d", array[i]);
			else
			printf(", %d", array[i]);

		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			first = mid + 1;
		else
			last = mid - 1;
	}
	return (-1);
}
