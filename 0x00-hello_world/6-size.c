#include <stdio.h>

/**
*main - print the string in the puts function
*Description: using the  main function
*This program prints "Programming is like building a multilingual puzzle
*Return: 0
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size_of_a_char: %1d byte(s)\n", sizeof(c));
	printf("siz_o_a_int: %1d byte(s)\n", sizeof(i));
	printf("size_of_a_long_int: %1byte(s)\n", sizeof(li));
	printf("size_of_a_long_long_int: %1byte(s)\n" sizeof(lli));
	printf("size_of_a_float: %1byte(s)\n", sizeof(f));
	return (0);
}
