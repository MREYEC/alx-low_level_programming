#include "main.h"

/**
 * _abs - Computes absolute value
 * @c: number to be computed
 * Return: absolute number or 0
 */

int _abs(int c)

{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
