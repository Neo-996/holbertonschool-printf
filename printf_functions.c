#include "main.h"

/**
 * print_char - write a single character
 * @args: pointer to the arguments list
 *
 * Return: length of the arguments list element
 */

int print_char(va_list args)
{
	int count = 0;

	_putchar(va_arg(args, int));
	count++;
	return (count);
}

/**
 * print_string - write a string of characters
 * @args: pointer to the arguments list
 *
 * Return: length of the string
 */

int print_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		count++;
	}

	return (count);
}

/**
 * print_percent - write a percentage symbol
 * @args: pointer to the arguments list
 *
 * Return: length of the arguments list element
 */

int print_percent(__attribute__((unused)) va_list args)
{
	int count = 0;

	_putchar('%');
	count++;

	return (count);
}


/**
 * print_decimal - convert and write decimal numbers
 * @args: pointer to the arguments list
 *
 * Return: length of the string of digits
 */

int print_decimal(va_list args)
{
	int num = va_arg(args, int);
	int i = 0;
	int digit_number = 0;
	int digit_string[21];
	unsigned int abs = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		abs = num * -1;
		_putchar('-');
		digit_number++;
	}
	if (num > 0)
		abs = num;
	while (abs != 0)
	{
		digit_string[i] = (abs % 10);
		abs /= 10;
		i++;
	}
	while (i > 0)
	{
		_putchar(digit_string[i - 1] + '0');
		digit_number++;
		i--;
	}
	return (digit_number);
}
