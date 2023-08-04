#include "main.h"

/**
 * print_binary - prints the binary of a number
 * @n: integer number that will be converted to binary and printed
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
