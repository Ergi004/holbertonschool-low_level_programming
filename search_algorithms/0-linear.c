#include "search_algos.h"

/**
 */

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL || !value)
		return (-1);

	for (size[array] = 0; size[array] != '\0'; size[array]++)
	{
		printf("%d\n", size[array]);
		if (size[array] == value)
		{
			printf("%d\n",value);
		}
	}
	return (value);
}
