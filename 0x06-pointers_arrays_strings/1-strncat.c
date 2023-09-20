#include "main.h"
/**
 * _strncat - concatenates two arrays
 * @dest: destination of concatenation
 * @src: source array to concatenation
 * @n: amount of times to append
 * Return: char value
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
