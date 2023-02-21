#include "main.h"

/**
 * main - Print alphabet in lowercase
 *
 * Return: Always 0.
 * print_alphabet - Print alphabet in lowercase
 */

void print_alphabet(void)
{
	int c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
