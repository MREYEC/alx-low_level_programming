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

	while (n < 10)
	{
	for (i = 'a' ; i <= 'z' ; i++)
	{
	_putchar(i);
	}
	n++;
	_putchar('\n');
	}
}
