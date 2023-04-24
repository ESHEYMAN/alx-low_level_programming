#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: Apointer to a string
 *
 * Return: the converted num, or 0 if error
 * or there is one more char
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int m = 0;

	if (b == NULL)
		return (0);

	while (b[m] == '0' || b[m] == '1')
	{
		val <<= 1;
		val += b[m] - '0';
		m++
	}
	return (val);
}
