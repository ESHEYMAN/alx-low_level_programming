#include "main.h"
/**
 * get_bit - A function that return the value of bit
 * At a given index
 * @n: is the number
 * @index: is the index starting from 0
 * Return: the value of the bit, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index);
{
int de_val

	if (index > 63)
	return (-1);

de_val = (n >> index) & 1;
return (de_val);
}
