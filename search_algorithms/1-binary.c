#include "search_algos.h"

/**
 *
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

		for (i = first; i < last; i++)
		{
			if (array[mid] == value)
				return (mid);
			else if (array[mid] > value)
			{
				last = mid - 1;
			}
			else
			{
				first = mid + 1;
			}
		}

	}
	return (-1);

}
