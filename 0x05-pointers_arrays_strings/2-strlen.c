#include "main.h"

/**
 * _strlen ->function to get the length of a strin
 * @s: string pointer to pass to this function
 *
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
	a++;
	return (a);
}
