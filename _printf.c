#include "main.h"
/**
 * _printf - Produces output
 * @format: Is a character string. The format string
 * is composed of zero or more directives
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0, j = 0, i = 0;
	spec_t spec_list[] = {
	{'c', print_char}, {'s', print_string}, {'%', print_percent},
	{'d', print_decimal},
	{'i', print_decimal},
	{'b', print_binary}, {'\0', NULL}};
va_start(args, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			for (j = 0; spec_list[j].c != '\0'; j++)
			{
				if (format[i + 1] == spec_list[j].c)
				{
					count += spec_list[j].spec(args);
					break;
				}
			}
			if (spec_list[j].c == '\0')
			{
				count += _putchar(format[i]);
				count += _putchar(format[i + 1]);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}}
va_end(args);
return (count);
}
