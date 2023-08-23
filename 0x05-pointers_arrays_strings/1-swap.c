#include "main.h"

/**
 * swap_int - Two intergers swap function
 * @a: The first integer.
 * @b: The second integer.
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
