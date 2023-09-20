#include "main.h"

/**
 * swap_int - Swaps two integers
 * @a: pointer to integer a
 * @b: pointer to integer b
 * Return: return nothing
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
