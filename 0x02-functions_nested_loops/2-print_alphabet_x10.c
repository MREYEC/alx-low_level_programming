#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - print a to z on ten lines
 * Return: return nothing
 */

void print_alphabet_x10(void)
{
	char i;
	int n = 0;

	while (i < 10)
	{
	for (n = 'a' ; n <= 'z' ; n++)
	{
	_putchar(n);
	}
	i++;
	_putchar('\n');
	}
}
