#include "main.h"
/**
 * get_bit - get the value of a bit at a given index.
 * @n: the integer number on evaluation
 * @index:  starting point from 0 of the bit required.
 *
 * Return: the value of the bit at index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n & (1 << index)) != 0);
}
