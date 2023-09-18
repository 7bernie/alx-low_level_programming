#include <stdio.h>

/**
 * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of the addition
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of the subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of the multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * divi - Divides two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of the division
 */
int divi(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		printf("Division by zero error\n");
		return (0);
	}
}

/**
 * mod - Computes the modulo of two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of the modulo operation
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		printf("Modulo by zero error\n");
		return (0);
	}
}
