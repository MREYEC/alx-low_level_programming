#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - from a to z
 * Return: return nothing
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}
