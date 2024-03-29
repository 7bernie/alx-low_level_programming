#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to integer number
 * @index: the starting point to change from 0 of the bit required to set
 * Return: 1 if it worked, or -1 if on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= 1 << index;
	return (1);
}
