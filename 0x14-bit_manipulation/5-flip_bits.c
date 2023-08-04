#include "main.h"

/**
 * flip_bits - the number of bits required to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: the number of bits required to flip n to get m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int num;

	num = n ^ m;

	while (num > 0)
	{
		num = num & (num - 1);
		count++;
	}
	return (count);
}
