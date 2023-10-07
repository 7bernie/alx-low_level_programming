#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int my_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);

	int len = vsnprintf(NULL, 0, format, args);
	char *buffer = (char *)malloc(len + 1);

	if (buffer)
{
	vsnprintf(buffer, len + 1, format, args);
	write(1, buffer, len);
	free(buffer);
}

	va_end(args);
    
	return len;
}

int main()
{
	my_printf("9 8 10 24 75 9\n");
	my_printf("Congratulations, you win the Jackpot!\n");
    
	return 0;
}
