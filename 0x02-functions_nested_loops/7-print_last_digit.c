#include "main.h"
/**
 * print_last_digit - last digit of a value
 * Return: value of last digit
 * @n: number to be returned
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (n < 0)
		last = last * -1;
	_putchar(last + '0');
	return (last);
}
