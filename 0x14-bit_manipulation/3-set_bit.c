#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * @n: A pointer
 * @index: index of the bit to set
 *
 * Return: 1, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int p;

	if (index > 63)
	return (-1);
	p = 1 << index;

*n = (*n | p);
return (1);
}
