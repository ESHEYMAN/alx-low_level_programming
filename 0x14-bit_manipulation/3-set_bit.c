#include "main.h"
/**
 * set_bit - A function that set the value of a bit
 * to 1 at a given index
 * @n: A pointer
 * @index: is the index starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
	return (-1);
*n = ((1UL  << index) | *n);
return (1);
}
