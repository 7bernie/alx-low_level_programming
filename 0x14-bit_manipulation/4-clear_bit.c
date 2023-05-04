#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to integerl number to modify
 * @index: the starting point from 0 of the bit required to set
 * Return: 1 if it worked, or -1 if on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
