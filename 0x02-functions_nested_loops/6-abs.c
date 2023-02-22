#include "<main.h"
#include <stdio.h>

/**
 * _abs - function that computes the absolute value of an integer
 *
 *@b:  the int that will use for the argument of the function
 * Return: 0
 */

int _abs(int b)
{

	if (b > 0 || b ==0)
	{
	return (b);
	}
	else
	return (b * -1);
}

