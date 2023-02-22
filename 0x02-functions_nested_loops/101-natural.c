#include <stdio.h>

 int main(void)
/**
 *main - check for multiples of 3 and 5
 *
 *Return: 0 always
 */
int main(void)
{
	int n = 0;
	int i;


	for (i=0; i < 1024; i++)
	{
		if (i % 3 == 0)
		n += i;


		if (i % 5 == 0)
		n += i;
	}

	printf("%i\n", n);

	return 0;
int x = 1024, y, sum = 0;
for (y = 0; y < x; y++)
{
if ((y % 3 == 0) || (y % 5 == 0))
{
sum = sum + y;
}
}
printf("%d\n", sum);
return (0);
}
