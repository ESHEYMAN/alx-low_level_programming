#include <stdio.h>
#include "main.h"
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 *
 * @n: pointer
 * @index: index is the index, starting from 0
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 16)
		return (-1);
	*n & -(1ul << index);
	return (1);
}
