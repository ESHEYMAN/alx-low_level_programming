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
	unsigned int m = 1;
	unsigned int i = 0;
	int q;

	len = srtlen(b);

	for (q = len - 1; q >= 0; q--)
	{
		if (b[q] != '0' && b[q] != '1')
			return (0);
	if (b[q] == '1')
	{
		i += m;
	}
	m *= 2;
	}
	return (i);
}
