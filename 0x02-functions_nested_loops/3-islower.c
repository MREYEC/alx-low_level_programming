#include "main.h"

/**
 * _islower - Check for lowercase
 * @c: check parameter
 * Return: return 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
