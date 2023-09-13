#include "main.h"

/**
 * print_sign - output the sign of a number
 * @n: accepts an integer
 * Return: return 1, 0 or -1
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar(n);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(n);
		return (-1);
	}
	else
	{
		_putchar(n);
		return (0);
	}
}
