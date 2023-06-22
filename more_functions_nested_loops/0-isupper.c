#include "main.h"
#include <ctype.h>

int _isupper(int c)
{
	while (c >= 65)
	{
		while (c <= 97 || c <= 33)
		{
			return (0);
		}
		return (1);
	}
	return (0);
}
