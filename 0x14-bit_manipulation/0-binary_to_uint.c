#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned  int
 * @b: binary.
 *
 * Return: the converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int leng;
	unsigned int unsi = 0;
if (!b)
	return (0);
for (leng = 0; b[leng]; leng++)
{
	if (b[leng] < '0' || b[leng] > '1')
		return (0);
	unsi = 2 * unsi + (b[leng] - m '0');
}
return (unsi);
}
