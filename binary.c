#include "main.h"

/**
 * print_binary - Prints an unsigned int in binary
 * @args: Argument list
 *
 * Return: Number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int n;
	int count = 0;
	unsigned int mask;

	n = va_arg(args, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	mask = 1 << 31;
	while ((mask & n) == 0)
		mask >>= 1;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		count++;
		mask >>= 1;
	}

	return (count);
}
