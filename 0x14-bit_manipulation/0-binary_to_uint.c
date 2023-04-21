#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned  int
 * @b: binary.
 *
 * Return: the converted number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
int d;
unsigned int dec_va = 0;

for (d = 0; b[d]; d++)
{
if (b[d] < '0' || b[d] > '1')
return (0);
dec_va = 2 * dec_va + (b[d] - '0');
}
if (!b)
return (0);

return (dec_va);
}
