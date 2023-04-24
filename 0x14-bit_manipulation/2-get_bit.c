#include "main.h"
/**
 * get_bit - A function that return the value of bit
 * At a given index
 * @n: is the number
 * @index: is the index starting from 0
 * Return: the value of the bit, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
if ((n & (1 << index)) == 0)
return (0);

if (index >= (sizeof(unsigned long int) * 8))
return (-1);

return (1);
}
